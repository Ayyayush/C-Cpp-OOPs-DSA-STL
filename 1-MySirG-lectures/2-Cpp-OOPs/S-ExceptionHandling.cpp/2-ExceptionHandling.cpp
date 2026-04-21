WHY EXCEPTION HANDLING ::
For separation of error handling code from, the rest of the code 
A function can throw many exception but choose to handle only some of them .The other exception which are thrown but  not caught are handled by caller.
If the caller chooses not to catch then the exceptions are handled by gthe caller of the caller 

IN C++ both basic type  and object types can be thrown as sxception (unlike java )


EXCEPTION HADNLING CONSISTS OF THREE KEYWORDS::
1.>try
2.>Throw
3.>catch


TRY::
// The try statement allows you to define a block of code to be tested for errors while it is being executed
// try
// {
// }



THROW::
    // The throw keyword throws an exception when a problem is detected which lets us create an custom error
    //     There in no cocept of automatic error throw unlike java



 CATCH ::
    // The catch statementr allows you to define a block of code to be executed,
    // if error occurs in the try block
    //     The try and cacth keywords come in pair

           



MUTLIPLE THROW::
    // EK hi try block mein multiplke throw statements ho skte h


MUTLIPLE CATCH ::
    // Ek hi try block ke sath multple catcgh block aa skte h


  CATCH ALL::
//  There is a special catch block called 'catch all' ........catch(...) that can be used to catch all types of exception





#include <iostream>
#include <stdexcept>

    using namespace std;

void handleExceptions()
{
    try
    {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        if (number == 0)
        {
            throw runtime_error("Number cannot be zero!");
        }
        else if (number < 0)
        {
            throw invalid_argument("Negative numbers are not allowed!");
        }
        else if (number > 100)
        {
            throw out_of_range("Number exceeds the allowed range (0-100)!");
        }
        else
        {
            cout << "You entered a valid number: " << number << endl;
        }
    }
    catch (const runtime_error &e)
    {
        cout << "Runtime error: " << e.what() << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Invalid argument: " << e.what() << endl;
    }
    catch (const out_of_range &e)
    {
        cout << "Out of range: " << e.what() << endl;
    }
    catch (...)             // catch all 
    { 
        // ye safer side ke liye likh lete  h ki agr kisi se match na ho rha ho
        cout << "An unexpected error occurred!" << endl;
    }
}

int main()
{
    handleExceptions();
    return 0;
}
