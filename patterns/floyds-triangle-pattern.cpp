#include <iostream>
using namespace std;

/* int main(){
    int n = 4;
    int num = 1;

    for (int i = 0; i < n; i++){
        for (int j = 1; j < i + 1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

        return 0;
} */

// reverse floyd's pattern
int main (){
    int n = 4;
    int num = 20;
    for (int i = n; i > 0; i--){
        for (int j = i; j > 0; j--){
            cout << num << " ";
            num--;
        }

        cout << endl;
    }

        return 0;
}