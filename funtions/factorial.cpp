#include <iostream>
using namespace std;

/**
 * Calculate N factorial;
 * n! = 1 x 2 x 3 x ..... n
 *
 */

 int calc_factorial(int N){
     int factorial = 1;
     
     if(N < 0){
         return N;
     }

     for (int i = 1; i <= N; i++){
         factorial *= i;
     }

     return factorial;
 }

 int main(){

     cout << calc_factorial(4) << endl;

     return 0;
 }
