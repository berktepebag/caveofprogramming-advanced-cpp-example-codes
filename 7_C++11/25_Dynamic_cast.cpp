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

int main()
{
    Parent parent;
    Brother brother;

    Parent *ppb = &parent; // Pointer of super class(parent) to subclass (brother)

    Brother *pbb = dynamic_cast<Brother *>(ppb);
    cout << "Pointer of subclass(brother) to superclass (parent): " << endl;
    if (pbb == nullptr)
    {
        cout << "Invalid cast" << endl;
    }
    else
    {
        cout << pbb << endl;
    }

    Parent *ppb2 = &brother;

    Brother *pbb2 = dynamic_cast<Brother *>(ppb2);

    cout << "Pointer of subclass(brother) to subclass (broher): " << endl;
    if (pbb2 == nullptr)
    {
        cout << "Invalid cast" << endl;
    }
    else
    {
        cout << pbb2 << endl;
    }

    return 0;
}