#include <iostream>

using namespace std;

int main()
{
    unsigned int min[2] = {10, 0};
    unsigned int max[2] = {0, 0};
    unsigned int vet[10];
    unsigned int val;

    for (unsigned int i = 0; i < 10; ++i)
    {
        do
        {
            cout << "Insira um valor inteiro positivo (entre 1 e 10):\n";
            cin >> val;
            if (val < 1 || val > 10)
            {
                cout << "O valor deve ser inteiro e positivo (entre 1 e 10)!!\n";
            }
        } while (val < 1 || val > 10);

        vet[i] = val;
        if (val < min[0])
        {
            min[0] = val;
            min[1] = i;
        }
        if (val > max[0])
        {
            max[0] = val;
            max[1] = i;
        }
    }

    cout << "\nMaior valor: " << max[0] << " - " << max[1] + 1 << "º Posição\n";
    cout << "Menor valor: " << min[0] << " - " << min[1] + 1 << "º Posição\n";

    return 0;
}