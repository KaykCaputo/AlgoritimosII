#include <iostream>
#include <string>

using namespace std;

int main()
{
    int occurrences = 0;
    int pos = 0;
    string phrase = "Lorem ipsum sit dolor ammet lorem ipsum sit dolor ammet, lorem ipsum sit dolor ammet";
    string target = "sit";
    while (true)
    {
        int found = phrase.find(target, pos);
        if (found < 0 || found >= phrase.size())
            break;
        occurrences++;
        pos = found + target.size();
    }
    cout << occurrences << endl;
}