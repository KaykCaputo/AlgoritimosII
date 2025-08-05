#include <iostream>

using namespace std;

int main()
{
    int vet[15] = {0};
    int val = 1;

    for (int i = 0; i < 15; i++)
    {
        vet[i] = val;
        val = val + vet[i - 1];
        cout << vet[i] << endl;
    }
    return 0;
}