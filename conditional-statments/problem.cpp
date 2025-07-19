#include <iostream>
using namespace std;

int main (){
    int n;
    double total_sum = 0; 

    cout << "Enter the nth number : ";
    cin >> n;

    for (int i = 0; i <= n; i++){
        if(i % 3 == 0){
            total_sum += i;
        }
        
    }

    cout << "Total sum " << total_sum << endl;
        return 0;
}