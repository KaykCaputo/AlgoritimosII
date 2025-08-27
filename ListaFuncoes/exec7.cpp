#include <iostream>

using namespace std;

unsigned int isPositiveIntAndLessThenTen();
void spelledOutNumber(unsigned int);

int main()
{
    spelledOutNumber(isPositiveIntAndLessThenTen());
    return 0;
}

void spelledOutNumber(unsigned int n)
{
    string numbers[] = {"Zero", "Um", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez"};
    cout << numbers[n] << endl;
}

unsigned int isPositiveIntAndLessThenTen()
{
    string str;
    unsigned int num;
    bool valid;
    do
    {
        valid = true;
        cout << "Insira um numero inteiro positivo menor que 10" << endl;
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
            if (num < 0 || num > 10)
                valid = false;
        }
    } while (!valid);
    return num;
}