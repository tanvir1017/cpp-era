#include <iostream>
using namespace std;

/* int main (){
    int i = 0;
    while (i <= 10){
        cout << i << endl;
        i++;
    }
    return 0;
} */

// Sum all the number from 0 to nth
int main(){

    int i = 0, total_sum = 0;
    while(i <= 6){
        total_sum += i;
        i++; // incrementing the ith value until condition match
    }

    cout << "sum = " << total_sum << endl;

    return 0;
}