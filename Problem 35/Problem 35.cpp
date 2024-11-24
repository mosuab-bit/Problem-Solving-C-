

#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string text;
	cout << "Please Enter Your String?\n";
	getline(cin, text);
	return text;
}
//void PrintEachWord(string text)
//{
//	string word = "";
//	for (int i = 0; i <= text.length(); i++)
//	{
//		if (text[i] != ' ')
//		{
//			word += text[i];
//		}
//		else
//		{
//			cout << word << endl;
//			word = "";
//		}
//	}
// if(word!="")
// {
// cout << word;
// }
//	
//}
void PrintEachWordInString(string text)
{
	string delim = " ";
	short pos = 0;
	string word;
	while ((pos = text.find(delim)) != std::string::npos)
	{
		word = text.substr(0, pos);
		if (word != "")
		{
			cout << word << endl;
		}

		text.erase(0, pos + delim.length());

	}

	if (text != "")
	{
		cout << text << endl;
	}
}
void PrintWord(string S)
{
	for (int i = 0; i < S.length(); i++)
	{
		if (S[0] == ' ')
			S[0] = S[i + 1];
		else if (S[i] != ' ')
			cout << S[i];
		else if (S[i - 1] != ' ')
			cout << endl;
	}
}
int main()
{

	PrintWord(ReadString());

	system("pause>0");
}

