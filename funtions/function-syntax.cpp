#include <iostream>
using namespace std;

// a function that will print two return the total of two number;

// double sum(double a, double b){    
//     return (double) a + b;
// }

// QS: Calculate sum of numbers from 1 to N;

int calc_sum_of_n(int num){
    if(num < 0){
        return num;
    }
        
    int total_of_num = 0;
    for (int i = 0; i <= num; i++){
        total_of_num += i;
    }

    return total_of_num;
}

int main()
{
    cout << calc_sum_of_n(4) << endl;

    return 0;
}