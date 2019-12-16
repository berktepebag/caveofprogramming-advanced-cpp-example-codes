#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

bool check(string &test)
{
    return test.size() == 3;
}

//Functor
class Check
{
public:
    bool operator()(string &test)
    {
        return test.size() == 5;
    }
} check1;

void run(function<bool(string &)> check)
{
    string test = "stars";
    cout << check(test) << endl;
}

int main(int argc, char const *argv[])
{

    vector<string> vec{"one", "two", "three"};

    vector<int> numbers{1, 2, 3};

    int size = 5;

    auto lambda = [size](string test) { return test.size() == size; };

    int count = count_if(vec.begin(), vec.end(), lambda);
    cout << count << endl;

    int count2 = count_if(vec.begin(), vec.end(), check);
    cout << count2 << endl;

    int count3 = count_if(vec.begin(), vec.end(), check1);
    cout << count3 << endl;

    run(lambda);
    run(check1);
    run(check);

    function<int(int, int)> add = [](int one, int two) { return one + two; };
    cout << add(7,3) << endl;

    return 0;
}
