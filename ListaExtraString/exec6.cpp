#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int c;
    string phrase;

    cout << "Insira o valor do coeficiente: " << endl;
    cin >> c;
    cout << "Insira a frase a ser codificada: " << endl;
    cin.ignore();
    getline(cin, phrase);

    for (unsigned i = 0; i < phrase.size(); i++)
    {
        if (phrase[i] == ' ')
        {
            continue;
        }
        phrase[i] += c;
    }

    cout << phrase << endl;

    return 0;
}