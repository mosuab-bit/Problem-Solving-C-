

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
//another way to solve it 
//void PrintFirstLetter(string text)
//{
//	
//	cout << text[0] << endl;
//	for (int i = 0; i < text.length(); i++)
//	{
//
//		if (text[i] == ' ')
//		{
//			cout << text[i + 1] << endl;
//		}
//
//	}
//}

void PrintFirstLetter(string text)
{

	bool isFirstLetter = true;

	cout << "\nFirst letters of this string: \n";

	for (int i = 0; i < text.length(); i++)
	{

		if (text[i] != ' ' && isFirstLetter)
		{
			cout << text[i] << endl;
		}
		isFirstLetter = (text[i] == ' ' ? true : false);
	}
}
int main()
{
	string text = ReadString();
	PrintFirstLetter(text);
}

