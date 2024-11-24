

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
int main()
{
	vector<string> vString = { "Mohammed","Ali","Maher","Hani" };
	cout << "\nVector after join: \n";
	cout << JoinString(vString, "&&");

	
	system("pause>0");
}

