#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

class Test
{
private:
    static const int SIZE = 100;
    int *_pBuffer{nullptr};

public:
    Test();

    Test(int i);

    Test(const Test &other);

    Test &operator=(const Test &other)
    {
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

        return *this;
    }

    Test(Test &&other);

    Test &operator=(Test &&other)
    {
        cout << "Move assignment" << endl;

        delete[] _pBuffer;
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;

        return *this;
    };

    ~Test();

    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &Test)
{
    return out;
}

Test::Test()
{
    _pBuffer = new int[SIZE]{};
}

Test::Test(int i)
{
    _pBuffer = new int[SIZE]{};

    for (int i = 0; i < SIZE; i++)
    {
        _pBuffer[i] = 7 * i;
    }
}

Test::Test(const Test &other)
{
    _pBuffer = new int[SIZE]{};
    memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
}

//*****Move constructor******
Test::Test(Test &&other)
{
    cout << "Move constructor" << endl;
    _pBuffer = other._pBuffer;
    other._pBuffer = nullptr;
}
//********************************

Test::~Test()
{
    delete[] _pBuffer;
}

Test getTest() { return Test(); }

int main(int argc, char const *argv[])
{
    // cout << "hello" << endl;

    Test test1 = getTest();

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    Test test;
    test = getTest();

    return 0;
}

// -fno-elide-constructors