#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "enter number: ";
    cin >> n;
    if(n % 2 == 0){
        cout << "number is even " << endl;
    }else{
        cout << "number is odd " << endl;
    }

    return 0;
}