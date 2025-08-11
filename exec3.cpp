#include <iostream>

using namespace std;

int main()
{
    unsigned int vet[10];
    unsigned int val;

    for (unsigned int i = 0; i < 10; ++i)
    {
        do
        {
            cout << "Insira um numero inteiro positivo: ";
            cin >> val;
            if (val < 0)
            {
                cout << "O numero deve ser inteiro e positivo!\n";
            }
        } while (val < 0);
        vet[i] = val;
    }

    cout << '\n';

    for (unsigned int i = 0; i < 10; ++i)
    {
        if (!(vet[i] & 1))
        {
            cout << vet[i] << " - " << i + 1 << "º Posição  É par!\n";
        }
    }

    return 0;
}