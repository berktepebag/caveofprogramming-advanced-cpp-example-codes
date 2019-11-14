#include <iostream>
using namespace std;

class CanGoWrong{

public:
    CanGoWrong(){
        char *pMemory = new char[9999];
        delete [] pMemory;
    }
};

int main(int argc, char const *argv[])
{
    try
    {
        CanGoWrong wrong;
    }
    catch(bad_alloc &e)
    {
        cout << "Cought expection: "<< e.what() << endl;
    }    

    cout << "Still running" << endl;

    return 0;
}

