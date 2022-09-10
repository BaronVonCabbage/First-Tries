// Andrew Rezmer	
// CS 1143	
// PC7-11
// 09 July 2022
#include <iostream>
#include <iomanip>
#include <fstream>	
#include <string>
using namespace std;

int main() {

	const int size = 300;
	const int ExamSize = 101;
	int count;
	char keyBank[ExamSize];
	char Answers[ExamSize];

	ifstream infile1;
	string fileName1;
	cout << "Enter the first file name: ";
	cin >> fileName1;
	if (infile1)
	{
		infile1.open(fileName1.c_str());
		while (infile1)
		{
			for (int i = 0; i < ExamSize; i++)
			{
				infile1 >> keyBank[i];
			}
			infile1.close();
		}
	}

	ifstream infile2;
	string fileName2;
	cout << "Enter the second file name: ";
	cin >> fileName2;
	if (infile2)
	{
		infile2.open(fileName2.c_str());
		while (infile2)
		{
			for (int i = 0; i < ExamSize; i++)
			{
				infile2 >> Answers[i];
				if (!infile2)
				{
					return 0;
				}
			}
			cout << endl << "Following questions are wrong: " << endl;
			count = 0;
			for (int i = 0; i < ExamSize; i++)
			{
				if (keyBank[i] != Answers[i])
				{
					count++;
					cout << "Question number : " << setw(2) << i + 1
						<< " Student answer: " << Answers[i]
						<< " Correct answer: " << keyBank[i] << endl;
				}
			}
			cout << endl;
			double percent = 100.00 * (ExamSize - count) / ExamSize;
			cout << "The student got " << percent << " questions wrong." endl;

			if (percent >= 70)
				cout << "The student has passed the exam." << endl;
			else
				cout << "The student did not pass the exam." << endl;
		}
	}
	infile2.close();

	return 0;
}