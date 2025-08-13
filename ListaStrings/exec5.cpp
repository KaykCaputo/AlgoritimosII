#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string variable_name = "";
    bool isValid = false;

    do
    {
        cout << "Insira um nome de variavel: " << endl;
        getline(cin, variable_name);

        if (!variable_name.empty() && (isalpha(variable_name[0])))
        {
            isValid = true;
            for (unsigned int i = 1; i < variable_name.size(); i++)
            {
                if (!isalnum(variable_name[i]) && variable_name[i] != '_')
                {
                    isValid = false;
                    break;
                }
            }
        }
        else
        {
            isValid = false;
        }

        if (!isValid)
        {
            cout << "Nome invalido" << endl;
        }

    } while (!isValid);

    cout << "Parabéns, " << variable_name << " é um nome apropriado!" << endl;

    return 0;
}