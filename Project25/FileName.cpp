#include <iostream>
#include <string>
using namespace std;
int upper = 0;
int lower = 0;
int count_letters(string str);
int count_words(string str);
int main()
{
	string str;
	cout << "Enter your string" << endl;
	getline(cin, str);
	count_letters(str);
	//count_words(str);
}
int count_letters(string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'E' || str[i] == 'F' || str[i] == 'G' || str[i] == 'H' || str[i] == 'I' || str[i] == 'J' || str[i] == 'K' || str[i] == 'L' || str[i] == 'M' || str[i] == 'N' || str[i] == 'O' || str[i] == 'P'|| str[i] == 'Q' || str[i] == 'R' || str[i] == 'S' || str[i] == 'T' || str[i] == 'U' || str[i] == 'V'|| str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
		{
			upper++;
		}
		if (str[i] == 'a' || str[i] == 'b' || str[i] == 'c' || str[i] == 'd' || str[i] == 'e' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h' || str[i] == 'i' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l'|| str[i] == 'm' || str[i] == 'n' || str[i] == 'o' || str[i] == 'p' || str[i] == 'q' || str[i] == 'r'|| str[i] == 's' || str[i] == 't' || str[i] == 'u' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x'|| str[i] == 'y' || str[i] == 'z')
		{
			lower++;
		}
	}

	cout << "The number of uppercase letters is: " << upper << endl;
	cout << "The number of lowercase letters is: " << lower << endl;
	return upper;
	return lower;
}