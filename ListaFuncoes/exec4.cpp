#include <iostream>
#include <cctype>

using namespace std;

unsigned int checkCapicua(string);

int main()
{
    string n;
    do
    {
        cout << "Insira um numero de até 4 digitos" << endl;
        cin >> n;
    } while (n.size() != 4);

    if (checkCapicua(n) == 1)
        cout << "O numero é capicua" << endl;
    else
        cout << "O numero não é capicua" << endl;
}

unsigned int checkCapicua(string num)
{
    for (unsigned int i = 0; i < num.size() / 2; i++)
    {
        if (num[i] != num[num.size() - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}