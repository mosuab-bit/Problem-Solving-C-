

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
bool CheckCapitalChar(char char1)
{
	return isupper(char1);
}
bool CheckSmallChar(char char1)
{
	return islower(char1);
}
int CountCapitalLetters(string text)
{
	int countCapitalLetter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (CheckCapitalChar(text[i]))
		{
			countCapitalLetter++;
		}
	}
	return countCapitalLetter;
}
int CountSmallLetters(string text)
{
	int countSmallLetter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (CheckSmallChar(text[i]))
		{
			countSmallLetter++;
		}
	}
	return countSmallLetter;
}
int main()
{
	string text = ReadString();

	cout << "\nString Length = " << text.length();
	cout << "\nCapital Letters Count= " <<
		CountCapitalLetters(text);
	cout << "\nSmall Letters Count= " << CountSmallLetters(text);
	

	system("pause>0");
}

