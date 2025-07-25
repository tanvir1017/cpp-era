#include <iostream>
using namespace std;

int calc_digit(int num){
    int dig_sum = 0;
    while (num > 0){
        int last_dig = num % 10;
        num /= 10;
        dig_sum += last_dig;
    }

    return dig_sum;
}

int main(){

    cout << "Sum of = " << calc_digit(2345) << endl;
    return 0;
}