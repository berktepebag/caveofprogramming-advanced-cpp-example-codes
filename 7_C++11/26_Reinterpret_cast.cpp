#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void speak()
    {
        cout << "parent" << endl;
    }
};

class Brother : public Parent
{
};

class Sister : public Parent
{
};

int main()
{
    Parent parent;
    Brother brother;

    Parent *ppb = &brother;

    Sister *pss = reinterpret_cast<Sister *>(ppb);
    cout << "Pointer of subclass(sister) to subclass (brother): " << endl;
    if (pss == nullptr)
    {
        cout << "Invalid cast" << endl;
    }
    else
    {
        cout << pss << endl;
    }

    return 0;
}