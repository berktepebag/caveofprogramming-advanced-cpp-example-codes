#include <iostream>
#include <exception>

using namespace std;

void goesWrong(){

    bool error1Detected = true;
    bool error2Detected = false;

    if (error1Detected)
    {
            throw bad_alloc();
    }

    if (error2Detected)
    {
        throw exception();
    }

}

int main(int argc, char const *argv[])
{
    try
    {
        goesWrong();
    }
    //
    // catch(const std::exception& e)
    // {
    //     cout << "Catching exception: " << e.what() << '\n';
    // }
    // catch(bad_alloc &e){
    //     cout << "Catching bad_alloc: " << e.what() << endl;
    // }

    //If you write subclass exceptions later:
    // catching_sublcass_exceptions.cpp:33:5: warning: exception of type ‘std::bad_alloc’ will be caught
    //  catch(bad_alloc &e){
    //  ^~~~~
    // catching_sublcass_exceptions.cpp:29:5: warning:    by earlier handler for ‘std::exception’
    //  catch(const std::exception& e)
    //  ^~~~~

    catch(bad_alloc &e){
        cout << "Catching bad_alloc: " << e.what() << endl;
    }
    catch(const std::exception& e){
        cout << "Catching exception: " << e.what() << '\n';
    }
    // Catching bad_alloc: std::bad_alloc

    
    return 0;
}
