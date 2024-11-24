

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
string ConvertStringToLower(string text)
{

	for (int i = 0; i < text.length(); i++)
	{
		text[i] = tolower(text[i]);
	}

	return text;
}
string ConvertStringToUpper(string text)
{

	for (int i = 0; i < text.length(); i++)
	{
		text[i] = toupper(text[i]);
	}

	return text;
}
int main()
{
	string text = ReadString();

    cout << "\nString after Upper:\n";
    text = ConvertStringToUpper(text);
	cout << text << endl;

	cout << "\nString after Lower:\n";
	text = ConvertStringToLower(text);
	cout << text << endl;

	system("pause>0");
}

