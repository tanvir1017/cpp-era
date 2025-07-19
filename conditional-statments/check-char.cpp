#include <iostream>
using namespace std;

int main (){

    char letter;
    cout << "Enter the character ";
    cin >> letter;
    if(letter >= 'a' && letter <= 'z'){
        cout << "You had typed lowercase of " << letter << endl;
    }else{
        cout << "You had typed uppercase of " << letter << endl;
    }
    

    return 0;
}