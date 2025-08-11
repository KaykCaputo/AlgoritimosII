#include <iostream>

using namespace std;

int main()
{
    unsigned int vet[15];
    vet[0] = 1;
    cout << vet[0] << '\n';

    if constexpr (15 > 1)
    {
        vet[1] = 1;
        cout << vet[1] << '\n';
    }

    for (unsigned int i = 2; i < 15; ++i)
    {
        vet[i] = vet[i - 1] + vet[i - 2];
        cout << vet[i] << '\n';
    }
    return 0;
}