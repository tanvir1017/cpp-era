#include <iostream>
using namespace std;

/**
 * Often program needs to change the data type from one tho another, which knows as type casting.
 * There are two many way of type casting IMPLICIT  | EXPLICIT
 * Implicit: type casting means which will handle by the compiler implicitly.
 * 
 * Explicit: On the other hand explicit means, which need to be told by programmer.
 */

int main (){
    int ASCII_DIFFER = 32; // The difference between uppercase and lowercase in ASCII ceatsheet;
    
    int ASCII_value = 84;
    char name_first_letter = ASCII_value +  ASCII_DIFFER; // getting char from ASCII value
    cout << name_first_letter << endl;
    return 0;
}