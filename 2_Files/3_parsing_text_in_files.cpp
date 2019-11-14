#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    string filename = "stats.txt";
    ifstream input;

    input.open(filename);

    if (!input.is_open())
    {
        return 1;
    }

    while (input)
    {
        string line;

        getline(input, line, ':');

        int population;
        input >> population;

        input >> ws; //C++ 11: read whitespace

        if (!input)
        {
            break;
        }

        cout << "'" << line << "'" << " -- " << population << "'" << endl;
    }

    return 0;
}
