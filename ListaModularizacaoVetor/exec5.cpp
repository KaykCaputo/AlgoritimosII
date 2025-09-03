// Elabore uma função sem retorno(procedimento)que receba um vetor X de n(1 < n > 10) elementos inteiros
// e devolva um vetor Y contendo apenas os elementos primos de X.Crie um programa para testar esta função.

#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(unsigned);
void ReturnVector(unsigned, unsigned[], unsigned[]);
void ShowVector(unsigned, unsigned);
void TestIsPrimeNumber();

int main()
{
    TestIsPrimeNumber();
    return 0;
}

void ReturnVector(unsigned n, unsigned vet[], unsigned vet2[])
{
    unsigned count = 0;
    for (unsigned i = 0; i < n; i++)
    {
        if (isPrimeNumber(vet[i]))
        {
            vet2[count] = vet[i];
            count++;
        }
    }
}

void ShowVector(unsigned n, unsigned vet[])
{
    for (unsigned i = 0; i < n; i++)
    {
        if (vet[i] != 0)
            cout << vet[i] << " ";
    }
    cout << endl;
}

void TestIsPrimeNumber()
{
    unsigned n = 10;
    unsigned vector[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned primeVet[n] = {0};
    ReturnVector(n, vector, primeVet);
    ShowVector(n, primeVet);
}

bool isPrimeNumber(unsigned num)
{
    if (num < 2)
        return false;
    unsigned sqr_root = int(sqrt(num));
    for (unsigned i = 2; i <= sqr_root; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
