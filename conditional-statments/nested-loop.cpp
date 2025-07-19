#include <iostream>
using namespace std;

int main (){
    int m = 4;
    for (int i = 0; i <= m; i++){ // will decide how many column it will print
        // will decide how many row it will print
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
        }
    
    return 0;
}
    
