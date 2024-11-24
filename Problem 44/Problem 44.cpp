

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string RemovePunctuation(string text)
{
	string text2;
	for (int i = 0; i < text.length(); i++)
	{
		if (!ispunct(text[i]))
		{
			text2 += text[i];
		}
	}

	return text2;
}
int main()
{
	string S1 = "Welcome to Jordan , Jordan it's a nice country";
	string afterremove = RemovePunctuation(S1);
	cout << afterremove;

	system("pause>0");

}
