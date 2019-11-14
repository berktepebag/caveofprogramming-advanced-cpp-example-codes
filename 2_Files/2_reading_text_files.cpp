#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{

    // ifstream inFile;
    fstream inFile;

    string inputFileName = "text.txt";

    inFile.open(inputFileName, ios::in);

    if (inFile.is_open())
    {
        string line;

        while (inFile) // this returns if file reached to the end or not as bool
        {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "Cannot open file: " << inputFileName << endl;
    }
    return 0;
}
