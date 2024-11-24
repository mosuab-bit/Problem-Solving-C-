

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
int PrintEachWordInString(string text)
{
	string delim = " ";
	short pos = 0;
	string word;
	int count = 0;
	while ((pos = text.find(delim)) != std::string::npos)
	{
		word = text.substr(0, pos);
		if (word != "")
		{
			count++;
		}

		text.erase(0, pos + delim.length());

	}

	if (text != "")
	{
		count++;
	}

	return count;
}
int main()
{

	cout << "The number of word in your string is : " << PrintEachWordInString(ReadString());

	system("pause>0");
}

