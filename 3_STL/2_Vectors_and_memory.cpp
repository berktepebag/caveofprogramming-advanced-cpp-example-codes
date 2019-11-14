#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<double> numbers(0);

    cout << "Size: " << numbers.size() << endl;

    int capacity = numbers.capacity();
    cout << "Capacity: " << numbers.capacity() << endl;

    for (int i = 0; i < 10000; i++)
    {
        if (numbers.capacity() != capacity)
        {
            capacity = numbers.capacity();
            cout << "Capacity: " << numbers.capacity() << endl;
        }
        numbers.push_back(i);
    }

    // numbers.clear();
    numbers.resize(100);
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;

    return 0;
}
