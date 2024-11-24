

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
bool IsVowel(char Ch1)
{
	Ch1 = tolower(Ch1);
	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1
		== 'o') || (Ch1 == 'u'));
}
void CountNumOfVowel(string text)
{
	cout << "\nVowels in string are : ";
	for (int i = 0; i < text.length(); i++)
	{
		if (IsVowel(text[i]))
		{
			cout << text[i] << "  ";
		}
	}
}
int main()
{

	string text = ReadString();

    CountNumOfVowel(text);

	system("pause>0");
}

