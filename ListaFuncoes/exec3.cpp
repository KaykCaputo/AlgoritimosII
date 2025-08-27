#include <iostream>
#include <cctype>
#include <cassert>

using namespace std;

int isLetter(char);
void testIsLetter();

int main()
{
    testIsLetter();
    return 0;
}

int isLetter(char ch)
{
    if (isalpha(ch))
    {
        return 1;
    }
    else
        return 0;
}

void testIsLetter()
{
    if (isLetter('a') == 1 && isLetter('1') == 0)
    {
        cout << "Test passed!" << endl;
    }
    else
        cout << "Test failed :(" << endl;
}