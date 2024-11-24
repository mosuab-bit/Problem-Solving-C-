

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
string ReplaceWordInString(string text,string StringToReplace,string ReplaceTo)
{
	int pos = text.find(StringToReplace);
	while (pos != std::string::npos)
	{
		text = text.replace(pos, StringToReplace.length(), ReplaceTo);
		pos = text.find(StringToReplace);
	}

	return text;
}
int main()
{
	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "Jordan";
	string ReplaceTo = "USA";
	cout << "\nOrigial String\n" << S1;
	cout << "\n\nString After Replace:";
	cout << "\n" << ReplaceWordInString(S1, StringToReplace, ReplaceTo);
	system("pause>0");

}
