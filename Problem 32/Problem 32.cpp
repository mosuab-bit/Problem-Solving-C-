

#include <iostream>
#include <string>
using namespace std;

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
int main()
{
	

	char char1 = ReadChar();
	if (IsVowel(char1))
	{
		cout << "\nYes it is vowel char";
	}
	else 
	{
		cout << "\nNo it is not vowel char";
	}


	system("pause>0");
}

