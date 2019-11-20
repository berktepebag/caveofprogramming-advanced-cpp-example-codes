#include <iostream>

using namespace std;

template <class T>
auto test(T value1) -> decltype(value1)
{
    return value1;
}

template <class T, class K>
auto test(T value1, K value2) -> decltype(value1 + value2)
{
    return value1 + value2;
}

int get(){
    return 999;
}

auto test2() -> decltype(get()){
    return get();
}


int main()
{
    auto value = 7;
    auto name = "Bob";

    cout << typeid(value).name() << endl;
    cout << typeid(name).name() << endl;
    cout << name << endl;

    cout << test("Hello world") << endl;

    cout << test(1,2) << endl;

    cout << test2() << endl;

    return 0;
}