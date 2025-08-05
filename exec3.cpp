#include <iostream>

using namespace std;

int main()
{
    int vet[10] = {0};
    int val;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            cout << "Insira um numero inteiro positivo: ";
            cin >> val;
            if (val < 0)
            {
                cout << "O numero deve ser inteiro e positivo!" << endl;
            }
        } while (val < 0);
        vet[i] = val;
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            cout << vet[i] << " - " << i + 1 << "º Posição" << "  É par! " << endl;
        }
    }

    return 0;
}