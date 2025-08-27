#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase;
    string temp;
    unsigned int a, b;

    cout << "Insira uma frase: " << endl;
    getline(cin, phrase);
    cout << "Insira o primeiro intervalo: " << endl;
    cin >> a;
    cout << "Insira o segundo intervalo: " << endl;
    cin >> b;

    for (unsigned int i = a; i < b; i++)
    {
        temp += phrase[i];
    }
    cout << temp << endl;
    return 0;
}