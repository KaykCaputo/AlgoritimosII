#include <iostream>

using namespace std;

int main()
{
    string word1 = "microondas";
    string word2 = "ondasmicro";
    string tempStr = "";
    char first = ' ';

    bool isCircPermut = false;

    tempStr = word1;

    if (word1.size() == word2.size())
    {
        for (unsigned int rot = 0; rot < word1.size(); ++rot)
        {
            first = tempStr[0];
            for (unsigned int i = 0; i < tempStr.size() - 1; ++i)
            {
                tempStr[i] = tempStr[i + 1];
            }
            tempStr[tempStr.size() - 1] = first;

            cout << tempStr << endl;

            if (tempStr == word2)
            {
                isCircPermut = true;
                break;
            }
        }
    }

    if (isCircPermut)
    {
        cout << "A palavra: " << word1 << " é uma permutação circular de: " << word2 << endl;
    }
    else
        cout << "As palavras não são permutações circulares :(";

    return 0;
}