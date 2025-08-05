#include <iostream>

#define TMAX 10

using namespace std;

int main()
{
    int vet[TMAX] = {0};
    int val = 5;

    for (int i = 0; i < TMAX; i++)
    {
        vet[i] = val;
        val += 5;
        cout << vet[i] << endl;
    }

    return 0;
}