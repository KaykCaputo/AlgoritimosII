#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    string phrase = "Te amo";
    string phraseB;
    do
    {
        cout << "Insira um numero positivo" << endl;
        cin >> n;
        if (n <= 0)
        {
            cout << "O numero deve ser positivo!" << endl;
        }
    } while (n <= 0);

    for (unsigned int i = 0; i < n; i++)
    {
        phraseB += " " + phrase;
    }

    cout << phraseB;

    return 0;
}
