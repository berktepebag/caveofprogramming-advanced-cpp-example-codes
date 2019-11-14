#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct  Person //members are Public by default
{
    char name[50]; //string does not know how many characters it will store, so we use char
    int age;
    double weight;
};

#pragma pack(pop)

int main(int argc, char const *argv[])
{
    Person someone = {"Berk",31,70};

    // cout << sizeof(Person) << endl;
    string fileName = "test.bin";

    // Write binary file

    ofstream outputFile;

    outputFile.open(fileName, ios::binary);

    if (outputFile.is_open())
    {
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        
        
        outputFile.close();
    }else
    {
        cout << "COuld not found file: " << fileName << endl;
    }

    // Read binary file

    Person someoneElse = {};

    ifstream inputFile;

    inputFile.open(fileName, ios::binary);

    if (inputFile.is_open())
    {
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        
        
        inputFile.close();
    }else
    {
        cout << "COuld not read file: " << fileName << endl;
    }  
    
    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.weight <<  endl;
    
    return 0;
}
