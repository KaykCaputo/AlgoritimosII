#include <iostream>

using namespace std;

float fahrenheitToCelsius(float);

int main()
{
    float n;
    cout << "Insira o valor em Fahrenheit: " << endl;
    cin >> n;
    cout << fahrenheitToCelsius(n);
    return 0;
}

float fahrenheitToCelsius(float fah)
{
    return (fah - 32) / 1.8;
}