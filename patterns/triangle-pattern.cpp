#include <iostream>
using namespace std;

/**
 * Result should be a structured of follow
 * 1
 * 22
 * 333
 * 4444
 * 55555
 */

/* int main(){
    int n = 5;
    int t_num = 64;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << (char)t_num;
        }

        t_num++;
        cout << endl;
    }

    return 0;
} */

/**
 * Reverse triangle ==>
 * Answer should be followed 
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * */

 int main(){
     int n = 4;
     for (int i = 0; i <n; i++){
         for (int j = i + 1; j > 0 ; j--){
             cout << j << " ";
         }
         cout << endl;
     }

     return 0;
 }