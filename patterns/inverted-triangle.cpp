/**
 * Inverted triangle pattern;
 * 1111 -> space 0, num 4 ==> i = 0
 *  222 -> space 1, num 3 ==> i = 1
 *   33 -> space 2, num 2 ==> i = 2
 *    4 -> space 3, num 1 ==> i = 3
 * So, if we get the space and its number we definitely could get the structure
 */

 #include <iostream>
 using namespace std;

 int main(){
     int n = 4;

     // Outer loop will decide how many rows will be in this pattern
     for (int i = 0; i < n; i++){
        // printing the space to making the structure
        for (int j = 0; j < i; j++){
            cout << " ";
        }

        // Printing the number in inverted way
        for (int k = 0; k < n - i; k++){
            cout << (i + 1)
        }

        cout << endl;
     }

         return 0;
 }