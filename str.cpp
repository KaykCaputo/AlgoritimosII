#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase = "Lorem ipsum dolor sit amet consectetur adipiscing elit quisque faucibus.";
    int wordStart = 0;
    int count;

    for (int i = 0; i < phrase.size(); i++)
    {
        if (phrase[i] == ' ' || phrase[i] == '.' || i == phrase.size() - 1)
        {
            int wordEnd = (i == phrase.size() - 1 && phrase[i] != ' ' && phrase[i] != '.') ? i + 1 : i;

            for (int j = wordStart; j < wordEnd; j++)
            {
                cout << phrase[j];
                count = wordEnd - wordStart;
            }
            cout << " | " << count;
            cout << endl;

            wordStart = i + 1;
        }
    }

    return 0;
}