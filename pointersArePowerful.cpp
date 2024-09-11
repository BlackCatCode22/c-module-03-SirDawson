/*
sD 9/11/24
pointersArePowerful.cpp
An array is a fixed-sized data structure that must contain the same data types.
*/

#include <iostream>

using std::cout, std::string;

int main()
{   
    int a = 22;
    int* p;

    p = &a;

    cout << "The memory address of 'p' is: " << p << ".\n"
         << "The value of 'a' is: " << *p << ".\n";

    *p = 25;

    cout << "The modified version of 'a' is: " << a << ".\n\n"
         << "----------------------------------------------\n\n";

    int arr[5];
    int* pArr = arr;

    for(int a = 0; a < 5; a++)
    {
       cout << "The memory address of 'arr[" << a << "]' is: " << pArr << ".\n";
       pArr++;
    }

    cout << "\n" << "----------------------------------------------\n\n"
         << "End of program.";

    system("pause>0");
    return 0;
}
