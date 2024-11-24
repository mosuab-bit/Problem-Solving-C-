

#include <iostream>
#include <string>
using namespace std;

char ReadString()
{
	char x;
	cout << "Please Enter Your Char?\n";
	cin >> x;
	return x;
}
char CheckChar(char x)
{
	return isupper(x) ? tolower(x) : toupper(x);
}
int main()
{
	char x = ReadString();

	cout <<"char after converting case : " << CheckChar(x);

	system("pause>0");
}

