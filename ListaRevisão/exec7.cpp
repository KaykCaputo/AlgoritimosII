#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    unsigned int n;

    do
    {
        cout << "Digite o tamanho da matriz estando entre 3 e 10:\n";
        cin >> n;
        if (n < 3 || n > 10)
        {
            cout << "Digite o tamanho da matriz válido!\n";
        }
    } while (n < 3 || n > 10);

    unsigned int matM[n][n];
    unsigned int sumDP = 0;
    unsigned int sumAP = 0;
    unsigned int prod[n];
    unsigned int sumCol[n] = {0};

    srand(time(nullptr));

    cout << "\n=== MATRIZ GERADA ===\n";
    for (unsigned int i = 0; i < n; ++i)
    {
        cout << "| ";
        for (unsigned int j = 0; j < n; ++j)
        {
            matM[i][j] = rand() % 10;
            cout << matM[i][j] << ' ';
        }
        cout << "|\n";
    }

    for (unsigned int i = 0; i < n; ++i)
    {
        unsigned int temp = 1;
        for (unsigned int j = 0; j < n; ++j)
        {
            unsigned int val = matM[i][j];
            if (i == j)
                sumDP += val;
            if (i < j)
                sumAP += val;
            temp *= val;
            sumCol[j] += val;
        }
        prod[i] = temp;
    }

    cout << "\n=== RESULTADOS ===\n";
    cout << "Soma da diagonal principal: " << sumDP << '\n';
    cout << "Soma do triangulo superior: " << sumAP << '\n';

    cout << "\n=== PRODUTO DAS LINHAS ===\n";
    for (unsigned int i = 0; i < n; ++i)
    {
        cout << "Linha " << (i + 1) << ": " << prod[i] << '\n';
    }

    cout << "\n=== SOMA DAS COLUNAS ===\n";
    for (unsigned int j = 0; j < n; ++j)
    {
        cout << "Coluna " << (j + 1) << ": " << sumCol[j] << '\n';
    }

    cout << "\n=== MATRIZ TRANSPOSTA ===\n";
    for (unsigned int i = 0; i < n; ++i)
    {
        cout << "| ";
        for (unsigned int j = 0; j < n; ++j)
        {
            cout << matM[j][i] << ' ';
        }
        cout << "|\n";
    }

    return 0;
}