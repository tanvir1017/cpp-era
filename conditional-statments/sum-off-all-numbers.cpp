 #include <iostream>
using namespace std;

int main (){
    int nth_number;
    int sum_of_odd = 0;

    // taking number from user
    cout << "Enter a number ";

    // storing that number into variable fo nth_number;
    cin >> nth_number;

    for (int i = 0; i < nth_number; i++)
    {
        if(i % 2 != 0){ // if the i count of number is odd;
            sum_of_odd += i;
            
        }
    }
    cout << "Total sum of odd number from 0 to " << nth_number << " is " << sum_of_odd << endl;
    return 0;
}