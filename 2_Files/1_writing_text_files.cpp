#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
    // ofstream outFile;
    fstream outFile;

    string outputFileName = "text.txt";

    // outFile.open(outputFileName);
    outFile.open(outputFileName, ios::out);

    if (outFile.is_open())
    {
        outFile << "Helloooo" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else
    {
        cout << "Cannot create file: " << outputFileName << endl;
    }
    
    return 0;
}

