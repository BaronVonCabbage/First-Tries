#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool isPrime(int);

int main()
{
    int n;
    int totalYes = 0;
    int totalNo = 0;

    ifstream randomFile;
    randomFile.open("C:\\Users\\rezme\\Desktop\\College\\BigList.txt");

    if (randomFile.fail())
        cout << "File cannot be opened.";

    else
    {

        while (randomFile >> n)
        {
            if (isPrime(n) == true)
                totalYes++;
            else
                totalNo++;
        }
    }

    cout << "Total yes: " << totalYes << endl;
    cout << "Total no: " << totalNo << endl;

    return 0;
}
bool isPrime(int n) {

    bool result = true;
    if (n == 0 || n == 1)
    {
        result = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                result = false;
                break;
            }
        }
    }
    return result;
}