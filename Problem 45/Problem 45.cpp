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

sClient ReadClientInfo()
{
    sClient Client;
    cout << "Enter Account Number? ";
    getline(cin, Client.AccountNumber);
    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);
    cout << "Enter Name? ";
    getline(cin, Client.Name);
    cout << "Enter Phone? ";
    getline(cin, Client.Phone);
    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
}
string ConvertRecordToLine(sClient client, string Seperator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += client.Name + Seperator;
    stClientRecord += client.AccountNumber + Seperator;
    stClientRecord += client.PinCode + Seperator;
    stClientRecord += client.Phone + Seperator;
    stClientRecord += to_string(client.AccountBalance);

    return stClientRecord;

}
int main()
{
    sClient Client;

    cout << "\nPlease Enter Client Data: \n\n";

    Client = ReadClientInfo();

    cout << "\n\nClient Record for Saving is: \n";
    cout << ConvertRecordToLine(Client);
    system("pause>0");
}

