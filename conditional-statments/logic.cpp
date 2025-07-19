#include <iostream>
using namespace std;

int main (){

    int const LIMITED_AGE= 18;
    int age = 0;
    
    cout << "Enter your age: " << endl;
    cin >> age;
    
    if(age >= (double)LIMITED_AGE){
        cout << "You are eligible to do the vote " << endl;
    } else{
        cout << "You are note eligible for voting system "  << endl;
    }

    return 0;
}