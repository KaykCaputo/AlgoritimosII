#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

bool isPrimeNumber(int);
void test_IsPrimeNumber();

int main()
{
    test_IsPrimeNumber();
}

unsigned int isPositiveAndInt()
{
    string str;
    unsigned int num;
    bool valid;
    do
    {
        valid = true;
        cout << "Insira um numero inteiro positivo" << endl;
        cin >> str;
        for (char c : str)
        {
            if (!isdigit(c))
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            num = stoi(str);
            if (num < 1)
                valid = false;
        }
    } while (!valid);
    return num;
}

bool isPrimeNumber(int num)
{
    if (num < 2)
        return false;
    unsigned sqr_root = int(sqrt(num));
    for (int i = 2; i <= sqr_root; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void test_IsPrimeNumber()
{
    for (unsigned int i = 1; i < 20; i++)
    {
        if (isPrimeNumber(i) == 0)
            cout << "O numero " << i << " não é primo" << endl;
        else
            cout << "O numero " << i << " é primo" << endl;
    }
}