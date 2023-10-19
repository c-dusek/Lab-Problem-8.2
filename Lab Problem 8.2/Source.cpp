#include <iostream>
#include <string>
using namespace std;
 
int countWords(string str);

int main()
{
	string input;
	while (true)
	{
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q" || input == "q")
			break;
		cout << "Word count: " << countWords(input) << endl;
	}
}
int countWords(string str)
{
	int i = str.size(), wordcount = 1;
	char indiv = 'a', before = 'a';
	for (int n = 0; n <= i; n++)
	{

		if (n >= 1)
		{
			indiv = str[n];
			before = str[n - 1];
		}
		else
			continue;

		if (indiv == ' ')
		{
			if (before == ' ')
				continue;
			else
				wordcount++;
		}
	}
	return wordcount;
}
