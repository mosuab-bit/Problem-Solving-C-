

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
char InvertCharCase(char x)
{
	return isupper(x) ? tolower(x) : toupper(x);
}
string StringAfterConvert(string text)
{
	for (int i = 0; i < text.length(); i++)
	{
		text[i] = InvertCharCase(text[i]);
	}
	return text;
}
int main()
{
	string text = ReadString();
    
	cout << "String After Convert all Letter Case  : \n";
	text = StringAfterConvert(text);
	cout << text;

	system("pause>0");
}

