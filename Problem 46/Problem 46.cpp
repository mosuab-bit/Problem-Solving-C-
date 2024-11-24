#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};
vector<string> SplitString(string line, string seperator = "#//#")
{
    int pos = 0;
    string sword = "";
    vector<string>vString;

    while ((pos = line.find(seperator))!=std::string::npos)
    {
        line.substr(0, pos);
        if (sword != "")
        {
            vString.push_back(sword);
        }

        line.erase(0, pos + seperator.length());
    }
    if (line != "")
    {
        vString.push_back(line);
    }

    return vString;
}
sClient ConvertLinetoRecord(string Line, string Seperator =
    "#//#")
{
    sClient Client;
    vector<string> vClientData;
    vClientData = SplitString(Line, Seperator);
    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

        return Client;
}
void PrintClientRecord(sClient Client)
{
    cout << "\n\nThe following is the extracted client record:\n";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code : " << Client.PinCode;
    cout << "\nName : " << Client.Name;
    cout << "\nPhone : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}
int main()
{
    string stLine = "A150#//#1234#//#Mosuab Flaifel#//#0780944955#//#5270.000000";
        cout << "\nLine Record is:\n";
    cout << stLine;
    sClient Client = ConvertLinetoRecord(stLine);
    PrintClientRecord(Client);
    system("pause>0");
}

