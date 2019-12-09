#include <iostream>

using namespace std;

class Test
{
private:
    int one{1};
    int two{2};

public:
    void run()
    {
        int three{3};
        int four{4};

        //One and two is instance variable and cannot be captured this way
        // auto pLambda = [one, three, four]() {
        //     cout << one << endl;
        //     cout << three << endl;
        //     cout << four << endl;
        // };
        // pLambda();

        //Instead we use this to capture instace variables
        auto pLambda = [this, three, four]() {
            cout << one << endl;
            two = 222;
            cout << two << endl;
            cout << three << endl;
            cout << four << endl;
        };
        pLambda();

        auto pLambda2 = [=]() {            
            cout << one << endl;
            two = 222;
            cout << two << endl;
            cout << three << endl;
            cout << four << endl; };
        pLambda2();

        auto pLambda3 = [&, this]() {            
            cout << one << endl;
            two = 222;
            cout << two << endl;
            cout << three << endl;
            cout << four << endl; };
        pLambda2();
    }
};

int main(int argc, char const *argv[])
{

    Test test;
    test.run();

    return 0;
}
