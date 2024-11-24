

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string JoinString(vector<string> vString, string Delim)
{
	string S1;
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
string LowerAllString(string word)
{
	for (char& char1 : word)
	{
		char1 = tolower(char1);
	}

	return word;
}
vector<string> SplitString(string text, string delim = " ")
{

	short pos = 0;
	string word;
	vector<string> Vstring;

	while ((pos = text.find(delim)) != std::string::npos)
	{
		word = text.substr(0, pos);
		if (word != "")
		{
			Vstring.push_back(word);
		}

		text.erase(0, pos + delim.length());

	}

	return Vstring;
}
string ReplaceWordInStringUsingSplit(string S1, string
	StringToReplace, string sRepalceTo, bool MatchCase = true)
{
	vector<string> vString = SplitString(S1, " ");
	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = sRepalceTo;
			}
		}
		else
		{
			if (LowerAllString(s) ==
				LowerAllString(StringToReplace))
			{
				s = sRepalceTo;
			}
		}
	}
	return JoinString(vString, " ");
}
int main()
{
	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "jordan";
	string ReplaceTo = "USA";
	cout << "\nOriginal String:\n" << S1;
	cout << "\n\nReplace with match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1,
		StringToReplace, ReplaceTo);
	cout << "\n\nReplace with dont match case: ";
	cout << "\n" << ReplaceWordInStringUsingSplit(S1,
		StringToReplace, ReplaceTo, false);
	system("pause>0");
	system("pause>0");

}
