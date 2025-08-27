#include <iostream>

using namespace std;

float isRealAndPositive(string);
float polToCm(float pol);

int main()
{
    float n = isRealAndPositive("Insira um valor em polegadas: ");
    cout << "Valor em centimetros: " << polToCm(n);
    return 0;
}

float isRealAndPositive(string msg)
{
    float n;
    do
    {
        cout << msg << endl;
        cin >> n;
    } while (n < 0);
    return n;
}

float polToCm(float pol)
{
    return pol * 2.54;
}