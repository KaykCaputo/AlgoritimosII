#include <iostream>
#include <cstdlib>

using namespace std;

unsigned int isPositiveIntAndLessThenTwelve();
void foundMonth(unsigned int);

int main()
{
    foundMonth(isPositiveIntAndLessThenTwelve());
    return 0;
}

unsigned int isPositiveIntAndLessThenTwelve()
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
            if (num < 1 || num > 12)
                valid = false;
        }
    } while (!valid);
    return num;
}

void foundMonth(unsigned int n)
{
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << months[n - 1] << endl;
}