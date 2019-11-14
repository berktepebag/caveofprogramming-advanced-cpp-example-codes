#include <iostream>
#include <map>

using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(): name(""), age(0){}

    Person(string name, int age) : name(name), age(age){}
    
    Person(const Person &other){
        cout << "Copy constructor running" << endl;
        name = other.name;
        age = other.age;
    }

    
    
    void print(){
        cout << name << ": " << age << endl;
    }
};

int main(int argc, char const *argv[])
{
    map<int, Person> people;

    people[30] = Person("Berk", 31);
    people[111] = Person("Ekin",30);
    people[232] = Person("balik", 1);

    people.insert(make_pair(55, Person("Bob", 45)));
    people.insert(make_pair(55, Person("Sue",24)));

    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->first << ": " << flush;
        it->second.print();
    }
    return 0;
}
