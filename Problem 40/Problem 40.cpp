

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
	string text;
	cout << "Please Enter Your String?\n";
	getline(cin, text);
	return text;
}
string JoinString(vector<string> vString, string delim)
{
	string text = "";
	for (string& s : vString)
	{
		text += s + delim;
	}

	return text.substr(0, text.length() - delim.length());
}
string JoinString(string arr[],int arrlength, string delim)
{
	string text = "";
	for (int i = 0; i < arrlength; i++)
	{
		text += arr[i] + delim;
	}

	return text.substr(0, text.length() - delim.length());
}
int main()
{
	vector<string> vString = { "Mohammed","Faid","Ali","Maher" };
	string arrString[] = { "Mohammed","Faid","Ali","Maher" };
	cout << "\nVector after join: \n";
	cout << JoinString(vString, " ");
	cout << "\n\nArray after join: \n";
	cout << JoinString(arrString, 4, " ");


	system("pause>0");
}

