#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception{

    public:

        virtual const char* what() const throw(){
            return "Something bad happened";
        }
};

class Test {
    public:
     void goesWrong(){
         throw MyException();
     }
};


int main(int argc, char const *argv[])
{

    Test test;

    try
    {
        test.goesWrong();
    }
    catch(MyException &e)
    {
        std::cerr << e.what() << '\n';
    }    
    
    return 0;
}
