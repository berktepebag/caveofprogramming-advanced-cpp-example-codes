#include <iostream>
using namespace std;

template <class T>
void print(T n)
{
    cout << n << " is template" << endl;
}

void print(int n)
{
    cout << n << " is non-template int" << endl;
}

template<class T>
void show(){
    cout << T() << endl;
}

int main()
{
    print<string>("Hello");
    print<int>(5);

    // template version
    print<>(6);
    // non - template version
    print(6);

    show<double>();

    return 0;
}
