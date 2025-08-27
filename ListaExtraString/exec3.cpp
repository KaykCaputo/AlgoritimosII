#include <iostream>
#include <string>

using namespace std;

int main()
{
    char vogals[] = {'a', 'e', 'i', 'o', 'u'};
    string phrase = "Lorem ipsum sit dolor ammet";
    string temp;

    temp = phrase;
    for (unsigned int i = 0; i < 5; i++)
    {
        for (unsigned int j = 0; j < phrase.size(); j++)
        {
            if (phrase[j] == ' ')
            {
                continue;
            }
            if (phrase[j] == vogals[i])
            {
                temp[j] = '\0';
            }
        }
    }
    cout << temp << endl;
}