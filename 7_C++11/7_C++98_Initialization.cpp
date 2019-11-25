#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int values[] = {1, 2, 3};

    cout << values[0] << endl;

    class C
    {
    public:
        string text;
        int id;
    };

    C c1 = {"Hello", 7};
    cout << c1.text << endl;

    struct S
    {
        string text;
        int id;
    };

    S s1 = {"Hello", 5};

    cout << s1.text << endl;

    struct R
    {
        string text;
        int id;
    } r1;

    r1 = {"Hello", 5};

    cout << r1.text << endl;

    struct
    {
        string text;
        int id;
    } r2 = {"Hello", 5}, r3 = {"bye bye", 3};

    cout << r2.text << endl;
    cout << r3.text << endl;

    vector<string> strings;

    strings.push_back("One");
    strings.push_back("Two");
    strings.push_back("Three");

    return 0;
}