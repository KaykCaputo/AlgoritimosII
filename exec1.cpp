#include <iostream>

#define TMAX 10

using namespace std;

int main()
{
    unsigned int vet[TMAX];
    unsigned int val = 5;

    for (unsigned int i = 0; i < TMAX; ++i)
    {
        vet[i] = val;
        val += 5;
        cout << vet[i] << '\n';
    }

    return 0;
}