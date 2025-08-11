#include <iostream>

using namespace std;

int main()
{
    unsigned int vet[5];
    unsigned int val;

    for (unsigned int i = 0; i < 5; ++i)
    {
        do
        {
            cout << "Insira um valor inteiro positivo(entre 1 e 10):\n";
            cin >> val;
            if (val < 1 || val > 10)
            {
                cout << "O valor deve ser inteiro positivo(entre 1 e 10):\n";
            }
        } while (val < 1 || val > 10);
        vet[i] = val;
    }

    for (unsigned int i = 0; i < 4; ++i)
    {
        unsigned int minIndex = i;
        for (unsigned int j = i + 1; j < 5; ++j)
        {
            if (vet[j] < vet[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            unsigned int temp = vet[i];
            vet[i] = vet[minIndex];
            vet[minIndex] = temp;
        }
    }

    for (unsigned int i = 0; i < 5; ++i)
    {
        cout << vet[i] << ' ';
    }

    return 0;
}