

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
string TrimLeft(string text)
{
	
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] != ' ')
		{
			return text.substr(i, text.length() - 1);
		}
	}
	return "";
}
string TrimRight(string text)
{

	for (int i = text.length()-1; i >=0 ; i++)
	{
		if (text[i] != ' ')
		{
			return text.substr(0, i+1);
		}
	}
	return "";
}
string Trim(string Text)
{
	return TrimLeft(TrimRight(Text));
}
int main()
{
	string S1 = " Hello World ";
	cout << "\nString = " << S1;
	cout << "\n\nTrim Left = " << TrimLeft(S1);
	cout << "\nTrim Right = " << TrimRight(S1);
	cout << "\nTrim = " << Trim(S1);
	
	system("pause>0");
}

