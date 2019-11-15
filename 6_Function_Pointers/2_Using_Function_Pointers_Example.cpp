#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool match(string test)
{
    return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*match)(string test))
{

    int count = 0;

    for (vector<string>::iterator it = texts.begin(); it != texts.end(); it++)
    {
        // cout << *it << endl;
        if (match(*it))
        {
            count++;
        }
    }
    return count;
}

int main()
{

    vector<string> texts;

    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");

    cout << match("one") << endl;

    cout << count_if(texts.begin(), texts.end(), match) << endl;
    
    // Our version of count_if
    cout << countStrings(texts, match) << endl;

    return 0;
}