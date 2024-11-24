

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
vector<string> SplitString(string text, string delim = "")
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

	if (text != "")
	{
		Vstring.push_back(text);
	}

	return Vstring;
}
string ReverseWordsInString(string S1)
{
	vector<string> vString;
	string S2 = "";
	vString = SplitString(S1, " ");
	// declare iterator
	vector<string>::iterator iter = vString.end();
	while (iter != vString.begin())
	{
		--iter;
		S2 += *iter + " ";
	}
	S2 = S2.substr(0, S2.length() - 1); //remove last space.
	return S2;
}
int main()
{
	string S1 = ReadString();
	cout << "\n\nString after reversing words:";
	cout << "\n" << ReverseWordsInString(S1);
	system("pause>0");


}