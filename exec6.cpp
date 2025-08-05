#include <iostream>
using namespace std;

int main()
{
    int vet[5];
    int val;
    string op;
    int searchNum;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "insira um valor inteiro positivo(entre 1 e 10): " << endl;
            cin >> val;
            if (val < 1 || val > 10)
            {
                cout << "O valor deve estar entre 1 e 10";
            }
        } while (val < 1 || val > 10);
        vet[i] = val;
    }

    do
    {
        cout << "\nDeseja buscar um número? (S/N): ";
        cin >> op;

        if (op == "N")
        {
            break;
        }

        do
        {
            cout << "Insira um valor inteiro positivo (entre 1 e 10): ";
            cin >> searchNum;

            if (searchNum < 1 || searchNum > 10)
            {
                cout << "O valor deve estar entre 1 e 10.\n";
            }

        } while (searchNum < 1 || searchNum > 10);

        bool encontrado = false;

        for (int i = 0; i < 5; i++)
        {
            if (vet[i] == searchNum)
            {
                cout << "Número encontrado! - " << vet[i] << " na posição " << i << endl;
                encontrado = true;
                break;
            }
        }

        if (!encontrado)
        {
            cout << "Número não encontrado no vetor.\n";
        }

    } while (op != "S");

    return 0;
}
