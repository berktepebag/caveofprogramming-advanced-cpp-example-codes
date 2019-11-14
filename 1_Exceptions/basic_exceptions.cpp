#include <iostream>
using namespace std;

void mightGoWrong(){

    bool error1 = false;
    bool error2 = false;
    bool error3 = true;


    if (error1){throw 8;}
    if (error2){throw "Something went wrong";}
    if (error3){throw string("Something went wrong");}
}

void usesMightGoWrong(){
    mightGoWrong();
}

int main(int argc, char const *argv[])
{
    try
    {
        usesMightGoWrong();
    }
    catch(int e)
    {
        cout << "Error code: " << e << '\n';
    }
    catch(char const * e){
        cout << "Error message: " << e << endl;
    }
    catch(string &e){
        cout << "String error message: " << e << endl;
    }

    cout << "Still running" << endl;
    
    

    return 0;
}
