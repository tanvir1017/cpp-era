#include <iostream>
using namespace std;

// will print all the letter in english
// int main(){
//     int n = 5;   
//     char ch = 'A';
//     for (int i = 0; i < n; i++) {
        
//         for (int j = 0; j < n; j++){
//             cout << ch;
//             ch += 1;
//         }
//         cout << endl;
//     }

//     cout << "After pattern : " << ch << endl;
//     return 0;
// }

int main(){
    int n = 4;
    int num = 1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}