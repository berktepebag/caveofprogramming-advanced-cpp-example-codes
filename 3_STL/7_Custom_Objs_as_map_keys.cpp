#include <iostream>
#include <map>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}

    Person(string name, int age) : name(name), age(age) {}

    Person(const Person &other)
    {
        // cout << "Copy constructor running" << endl;
        name = other.name;
        age = other.age;
    }

    void print() const
    {
        cout << name << " is " << age << " years old." << flush;
    }

    // Important!!!!!!!!!!!!!!!!!!!
    // vvvvvvvvvvvvvvvvvvvvvvvvvvvv
    bool operator<(const Person &other) const
    {
        if (name == other.name)
        {
            return age < other.age;
        }
        else
        {
            return name < other.name;
        }
    }
};

int main(int argc, char const *argv[])
{
    map<Person, int> people;

    people[Person("Berk", 31)] = 1;
    people[Person("Berk",333)] = 4;
    people[Person("Ekin", 30)] = 2;
    people[Person("balik", 1)] = 3;

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }
    return 0;
}
