#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool found = false;
    string phrase = "Lorem ipsum sit dolor ammet lorem ipsum sit dolor ammet, lorem ipsum sit dolor ammet";
    string target = "ammet";
    if (phrase.find(target, phrase.size() - target.size()) == phrase.size() - target.size())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}