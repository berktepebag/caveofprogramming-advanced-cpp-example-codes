#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Test
{
    int id;
    string name;

public:
    Test(int id_in, string name_in) : id(id_in), name(name_in) {}

    void print()
    {
        cout << id << " : " << name << endl;
    }

    // First method to sort
    bool operator<(const Test &other) const
    {
        if (name == other.name)
        {
            return id < other.id;
        }
        else
        {
            return name < other.name;
        }
    }

    //Second method to sort. friend, let's comp function to reach private variables!
    friend bool comp(const Test &a, const Test &b);


};

bool comp(const Test &a, const Test &b){

    return a.name < b.name;
}

int main()
{

    vector<Test> tests;

    tests.push_back(Test(3,"Berk"));
    tests.push_back(Test(5, "Yiğit"));
    tests.push_back(Test(10, "Mert"));
    tests.push_back(Test(7, "Berkay"));
    tests.push_back(Test(3, "Ekin"));

    // First method to sort
    // sort(tests.begin(), tests.end());

    // Second method to sort with function pointer at the end
    sort(tests.begin(), tests.end(), comp);


    for (int i = 0; i < tests.size(); i++)
    {
        tests[i].print();
    }

    return 0;
}