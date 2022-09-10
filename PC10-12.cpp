// Andrew Rezmer
// CS 1143
// PC10-12
// 18 July 2022

#include <iostream>	
#include <string>
#include <cctype>

using namespace std;

bool UpperCase(string);
bool LowerCase(string);
bool Digit(string);
bool Punctuation(string);
bool Length(string);
bool Space(string);

int main() {
	int numTries = 10;
	string password;
	string passphrase = "Lost_Frogs99";
	do {
		cout << endl;
		cout << "Enter a pass word: ";
		getline(cin, password);
		cout << endl;
		if (password != passphrase) {
			if (Space(password) == true)
			{
				cout << "Password cannot contain spaces." << endl;
			}
			if (Length(password) == false)
			{
				cout << "Password must be at least 12 characters or more." << endl;
			}
			if (UpperCase(password) == false)
			{
				cout << "Password does not contain uppercase characters." <<
					endl;
			}
			if (LowerCase(password) == false)
			{
				cout << "Password does not contain lowercase characters." <<
					endl;
			}
			if (Digit(password) == false)
			{
				cout << "Password must contain at least one digit." << endl;
			}
			if (Punctuation(password) == false)
			{
				cout << "Password must contain at least one special character." << endl;
			}
			cout << endl;
		}
		else if (password == passphrase)
		{
			cout << "Your password is saved." << endl;
		}

	} while (numTries > 0 && password != passphrase);
		return 0;
}

bool UpperCase(string password)
{
	bool isUpper = false;
	for (size_t i = 0; i < password.length(); i++)
	{
		if (isupper(password[i]))
		{
			isUpper = true;
		}
	}
	return isUpper;
}
bool LowerCase(string password)
{
	bool isLower = false;
	for (size_t i = 0; i < password.length(); i++)
	{
		if (islower(password[i]))
		{
			isLower = true;
		}
	}
	return isLower;
}
bool Digit(string password)
{
	bool isDigit = false;
	for (size_t i = 0; i < password.length(); i++)
	{
		if (isdigit(password[i]))
		{
			isDigit = true;
		}
	}
	return isDigit;
}

bool Punctuation(string password)
{
	bool isPunct = false;
	for (size_t i = 0; i < password.length(); i++)
	{
		if (ispunct(password[i]))
		{
			isPunct = true;
		}
	}
	return isPunct;
}

bool Length(string password)
{
	bool length = false;
	password.length() >= 12 ? length = true : length = false;
	return length;
}
bool Space(string password)
{
	bool isSpace = false;
	for (int i = 0; i < password.length(); i++) {
		int c = password[i];
		if (isspace(c)) {
			isSpace = true;
		}
	}
	return isSpace;
}
