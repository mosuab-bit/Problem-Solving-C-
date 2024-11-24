

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
int CountChar(string text, char char1)
{
	int counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i]==char1)
		{
			counter++;
		}
	}
	return counter;
}
int main()
{
	string text = ReadString();

	char char1 = ReadChar();

	cout << "letter " << char1 << " count = " << CountChar(text, char1);

	system("pause>0");
}

