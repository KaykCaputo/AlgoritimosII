#include <iostream>

using namespace std;

int main()
{
    string word = "reviver";

    bool isPalindrome = true;
    unsigned int len = word.size();

    for (unsigned int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "A Palavra: " << word << " é um palindromo";
    }
    else
    {
        cout << "A Palavra: " << word << " não é um palindromo";
    }

    return 0;
}
