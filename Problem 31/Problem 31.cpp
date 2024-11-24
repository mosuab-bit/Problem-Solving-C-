

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
char ReadChar()
{
	char char1;
	cout << "Please Enter Your Char?\n";
	cin >> char1;
	return char1;
}
short CountLetter(string text, char Letter, bool MatchCase = true)
{
	short Counter = 0;
	for (short i = 0; i < text.length(); i++)
	{
		if (MatchCase)
		{
			if (text[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(text[i]) == tolower(Letter))
				Counter++;
		}
	}
	return Counter;
}
int main()
{
	string text = ReadString();

	char char1 = ReadChar();

	

	system("pause>0");
}

