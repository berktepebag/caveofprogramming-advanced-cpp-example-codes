#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test
{
private:
    string name;

public:
    Test();
    Test(string name_in);

    ~Test();

    void print()
    {
        cout << name << endl;
    }
};

Test::Test() : name("")
{
    // cout << "Empty obj created" << endl;
}

Test::Test(string name_in) : name(name_in)
{
    // cout << "Object named '" << name << "' created" << endl;
}

Test::~Test()
{
    // cout << "Onject destroyed" << endl;
}

int main(int argc, char const *argv[])
{

    //Last in, first out (LIFO)
    stack<Test> testStack;

    testStack.push(Test("Sue"));
    testStack.push(Test("Mike"));
    testStack.push(Test("Joe"));

    cout << endl;

    // This is invalid! Object is being destroyed!!
    // Test &test1 = testStack.top();
    // testStack.pop();
    // test1.print();

    //Joe came last, at top of stack
    Test test1 = testStack.top();
    test1.print();

    //Joe popped first
    testStack.pop();
    Test test2 = testStack.top();
    // Mike is at top now
    test2.print();

    cout << "******Stack" << endl;

    while (testStack.size() > 0)
    {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }

    //First in First out (FIFO)
    queue<Test> testQueue;

    testQueue.push(Test("Sue"));
    testQueue.push(Test("Mike"));
    testQueue.push(Test("Joe"));

    cout << "******Queue" << endl;

    testQueue.back().print();

    while (testQueue.size() > 0)
    {
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }

    return 0;
}
