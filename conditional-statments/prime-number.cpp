#include <iostream>
using namespace std;

int main(){
    int n = 14;
    bool isPrime = true;
    for (int i = 2;  i * i <= n ; i++){
        if(n % i == 0){
            isPrime = false;
            break;  
        }
        
    }

     if(isPrime == true){
         cout << "Prime number";
     }else{
        cout <<"Not Prime number";
     }
          
     cout << endl;

     return 0;
}