#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase = "Lorem ipsum sit dolor ammet";
    char a;
    char b;

    cout << "Insira um caracter: " << endl;
    cin >> a;
    cout << "Insira outro caracter: " << endl;
    cin >> b;

    for (unsigned int i = 0; i < phrase.size(); i++)
    {
        if (phrase[i] == a)
        {
            phrase[i] = b;
        }
    }

    cout << phrase << endl;
}