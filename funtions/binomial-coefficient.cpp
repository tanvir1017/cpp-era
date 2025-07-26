#include <iostream>



// calculate factorial
int factorial(int num){
    int fact_num = 1;
        
    if (num == 0 || num == 1){
        return num;
    }

    for (int i = 2; i <= num; i++){
            (fact_num *= i);
        }

    return fact_num;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r= factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main(){

    // QS --> Calculate nCr binomial coefficient for n & r
    // where n = 8 & r = 2

    std::cout << nCr(10, 6) << std::endl;

    return 0;
}