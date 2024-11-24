

#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
string ConvertFirstLetterToUpper(string text)
{
	bool isFirstLetter = true;

	for (int i = 0; i < text.length(); i++)
	{

		if (text[i] != ' ' && isFirstLetter)
		{
			text[i] = toupper(text[i]);
		}
		isFirstLetter = (text[i] == ' ' ? true : false);
	}

	return text;
}
int main()
{
	string text = ReadString();
	;
	cout << "\nString after conversion:\n";
	text = ConvertFirstLetterToUpper(text);
	cout << text << endl;
	system("pause>0");
}

