#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cats = 5;

    //throws expression must be a modifiable lvalue
    // [cats]() { cats = 8; cout << cats << endl; };

    //Use 'mutable'
    [cats]() mutable { 
        cats = 8; 
        cout << cats << endl; }();
        
    cout << cats << endl;

    return 0;
}
