#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase = "Lorem ipsum sit dolor ammet";
    unsigned int n;
    unsigned int index;
    bool found = false;
    char ch;

    cout << "Insira um caracter: " << endl;
    cin >> ch;
    cout << "Insira um numero: " << endl;
    cin >> n;

    if (n > phrase.size() || n < 0)
    {
        cout << "Numero invalido" << endl;
        return 0;
    }

    for (unsigned int i = n; i < phrase.size(); i++)
    {
        if (phrase[i] != ch)
        {
            continue;
        }
        index = i;
        found = true;
        break;
    }

    if (found)
    {
        cout << "Encontrado na posição: " << index << endl;
    }
    else
        cout << "Caracter não encontrado" << endl;
}