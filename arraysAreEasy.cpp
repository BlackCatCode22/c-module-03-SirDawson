/*
sD 9/9/24
arraysAreEasy.cpp
An array is a fixed-sized data structure that must contain the same data types.
*/

#include <iostream>

using namespace std;

int main()
{
   cout << "\nArrays are easy an fun (up until the third dimension)." << "\n";

   int luckyNums[] = {1,2,3,4,5,6,7,8,9,10};
   //                 0 1 2 3 4 5 6 7 8 9

   cout << "\nThe value in 'luckyNums[4]' is: " << luckyNums[4] << ".\n\n";

   /* To find the size of your array, as in the number of elements,
   we can divide the memeory size of our array by the memory size of
   our array's data type. */

   cout << "The memory size of 'luckyNums' is: " << sizeof(luckyNums) << ".\n\n";
   cout << "The memory size of an 'int' is: " << sizeof(int) << ".\n\n";

   int numOfElementsInLuckyNums = sizeof(luckyNums) / sizeof(int);

   cout << "The number of elements in 'luckyNums' is: " << numOfElementsInLuckyNums << ".\n\n"
        << "-------------------------------------------------\n\n";

   // Create an int array with 100 elements.
   int myIntArrayWith100elements[100];

   // Fill the array using a 'for' loop.
   for(int i = 0; i <= 100; i++)
   {
      myIntArrayWith100elements[i] = rand() % 100;
   }

   // Display all elements of the array with a 'for' loop.
   for(int i = 0; i < 100; i++)
   {
      cout << "myIntArrayWith100elements[" << i << "] is " << myIntArrayWith100elements[i] << ".\n\n";
   }

   cout << "-------------------------------------------------\n\n";

   // Create a 2D array of 3 rows and 4 columns.
   int my2Darray [3][4];

   // Fill the array with a nested 'for' loop.
   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 4; j++)
      {
         my2Darray[i][j] = rand() % 100;
      }
   }

   // Output our 2D array.
   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 4; j++)
      {
         cout << "my2Darray[" << i << "][" << j << "] is " << my2Darray[i][j] << ".\n\n";
      }
   }

   cout << "-------------------------------------------------\n\n";

   // Create a 3D 'int' arraywith 6 depths, 5 rows, and 4 columns.
   int my3Darray[5][4][3];

   // Fill the array using a 'for' loop.
   for(int i = 0; i < 5; i++)
   {
      for(int j = 0; j < 4; j++)
      {
         for(int k = 0; k < 3; k++)
         {
            my3Darray[i][j][k] = rand() % 100;
         }
      }
   }

   // Output our 3D array.
   for(int i = 0; i < 5; i++)
   {
      for(int j = 0; j < 4; j++)
      {
         for(int k = 0; k < 3; k++)
         {
            cout << "my3Darray[" << i << "][" << j << "][" << k << "] is " << my3Darray[i][j][k] << ".\n\n";
         }
      }
   }

   cout << "-------------------------------------------------\n\n"
        << "End of program.\n\n";

   return 0;
}

/* C++ is 0-based and row major. Meaning lists and such in C++ start a 0, not 1, and rows come before columns when making 2D arrays.

  *    0   1   2
     -------------
  0  |   |   |   |
     -------------
  1  |   |   | x |
     -------------
  2  |   |   |   |
     -------------

     For example, to call 'x' in the array. You would do:

     findX[1][2];

     The terminal will search for what's in row 1 column 2, which is 'x'.

*/