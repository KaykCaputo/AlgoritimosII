#include <iostream>

using namespace std;

int main()
{
    int vet[5];
    int temp;
    int val;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "Insira um valor inteiro positivo(entre 1 e 10): " << endl;
            cin >> val;
            if (val < 1 || val > 10)
            {
                cout << "O valor deve ser inteiro positivo(entre 1 e 10): " << endl;
            }
        } while (val < 1 || val > 10);
        vet[i] = val;
    }

    for (int i = 0; i < 4; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (vet[j] < vet[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            temp = vet[i];
            vet[i] = vet[minIndex];
            vet[minIndex] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vet[i] << " ";
    }

    return 0;
}