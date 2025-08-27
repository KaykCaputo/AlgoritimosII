#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word = "abacate";
    char ch;
    string temp;

    for (int i = word.size() - 1; i >= 0; i--)
    {
        ch = word[i];
        if (ch == 'a')
        {
            ch = '*';
        }
        temp += ch;
    }
    cout << temp << endl;
}