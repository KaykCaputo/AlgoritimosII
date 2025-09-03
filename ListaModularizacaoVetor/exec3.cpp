#include <iostream>

using namespace std;

float ReadFloatValue();
void SelectionSort(float[], unsigned);
void ShowVector(float[], unsigned);

int main()
{
    float num[5];
    for (unsigned i = 0; i < 5; ++i)
    {
        num[i] = ReadFloatValue();
    }
    SelectionSort(num, 5);
    ShowVector(num, 5);
    return 0;
}

float ReadFloatValue()
{
    float num = 0;
    string str;
    bool valid = false;

    do
    {
        cout << "Insira um numero real: " << endl;
        cin >> str;
        valid = true;
        for (unsigned int i = 0; i < str.size(); ++i)
        {
            if (!isdigit(str[i]) && str[i] != '.' && str[i] != ',')
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            num = stof(str);
            if (num > 10 || num < 0)
            {
                valid = false;
            }
        }
        if (!valid)
        {
            cout << "Insira um numero valido!" << endl;
        }
    } while (!valid);

    return num;
}

void SelectionSort(float vet[], unsigned n)
{
    for (unsigned i = 0; i < n - 1; ++i)
    {
        unsigned pos = i;
        for (unsigned j = i + 1; j < n; ++j)
            if (vet[j] < vet[pos])
                pos = j;
        swap(vet[i], vet[pos]);
    }
}

void ShowVector(float vet[], unsigned n)
{
    cout << "[";
    for (unsigned i = 0; i < n; i++)
    {
        cout << vet[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "]";
}