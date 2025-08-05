#include <iostream>

using namespace std;

int main()
{
    int min[2] = {10};
    int max[2] = {0};

    int vet[10] = {0};
    int val = 0;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            cout << "Insira um valor inteiro positivo (entre 1 e 10): " << endl;
            cin >> val;
            if (val < 0 || val > 10)
            {
                cout << "O valor deve ser inteiro e positivo (entre 1 e 10)!!" << endl;
            }
        } while (val < 0 || val > 10);

        vet[i] = val;
        if (vet[i] < min[0])
        {
            min[0] = vet[i];
            min[1] = i;
        }
        if (vet[i] > max[0])
        {
            max[0] = vet[i];
            max[1] = i;
        }
    }

    cout << endl;

    cout << "Maior valor: " << max[0] << " - " << max[1] + 1 << "º Posição " << endl;
    cout << "Menor valor: " << min[0] << " - " << min[1] + 1 << "º Posição " << endl;

    return 0;
}