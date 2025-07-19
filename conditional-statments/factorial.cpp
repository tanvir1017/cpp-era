#include <iostream>
using namespace std;

int main (){
    int n = 5;
    double total_factorial = 1;
    for (int i = 1; i <= n; i++){
        total_factorial *= i;

    }
    cout << "Total factorial of " << n << " = " << total_factorial << endl;
    return 0;
}