#include <iostream>

using namespace std;

int main()
{
    string phrase = "Lorem ipsum dolor sit amet consectetur adipiscing elit quisque faucibus.";
    unsigned int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (unsigned int j = 0; j < phrase.size(); j++)
    {
        switch (phrase[j])
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        default:
            break;
        }
    }

    unsigned int max_count = a;
    char max_vowel = 'a';

    if (e > max_count)
    {
        max_count = e;
        max_vowel = 'e';
    }
    if (i > max_count)
    {
        max_count = i;
        max_vowel = 'i';
    }
    if (o > max_count)
    {
        max_count = o;
        max_vowel = 'o';
    }
    if (u > max_count)
    {
        max_count = u;
        max_vowel = 'u';
    }

    cout << "Contagem de vogais:" << endl;
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
    cout << "\nVogal que mais apareceu: " << max_vowel << " (" << max_count << " vezes)" << endl;

    return 0;
}