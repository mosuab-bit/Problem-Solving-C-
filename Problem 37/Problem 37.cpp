

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

	if (text != "")
	{
		Vstring.push_back(text);
	}

	return Vstring;
}

int main()
{

	vector<string> vString;
	vString = SplitString(ReadString(), " ");
	cout << "\nTokens = " << vString.size() << endl;
	for (string& s : vString)
	{
		cout << s << endl;
	}

	system("pause>0");
}

