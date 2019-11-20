#include <iostream>

using namespace std;

class Animal //An abstract class is a class that contains pure virtual function. Abstract classes cannot be instaniated.
{
public:
    virtual void speak() = 0; //Pure virtual function
    virtual void run() = 0;
};

class Dog : public Animal
{
public:
    virtual void speak()
    {
        cout << "Hav" << endl;
    }
};

class Bulldog : public Dog
{
public:
    Bulldog(){
        cout << "A bulldog is born" << endl;
    }

    virtual void run()
    {
        cout << "Bulldog runs" << endl;
    }
    virtual void speak(){
        cout << "Grrrr" << endl; //This overrides parent class
    }
};

void test(Animal &a){
    a.speak();
}

int main()
{

    // Dog dog; // Since Dog does not have run() function it cannot be instatiated
    // dog.speak();

    Bulldog bulldog;
    bulldog.run();
    bulldog.speak();

    // Animal animals[]; // This wont work because it does not have a constructor
    Bulldog bulldogs[3];

    Animal *animals[5]; //But a pointer can be created.
    animals[0] = &bulldog;
    animals[0]->run();

    test(bulldog);

    return 0;
}