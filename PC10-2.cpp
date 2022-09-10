// Andrew Rezmer
// CS 1143
// PC10-2
// 17 July 2022

#include <iostream>	
#include <cctype>	
#include <string>	

using namespace std;

string reverseString(string s);

int main() {

	char s[100];

	cout << "Enter the string: ";

	cin.getline(s, 100);

	cout << "The reverse of the sentence is " << reverseString(s) << endl;

	return 0;
}
string reverseString(string s)
{
	string reverse;

	for (int i = s.size() - 1; i >= 0; i--)
	{
		reverse = reverse.append(1, s[i]);
	}
	return reverse;
}