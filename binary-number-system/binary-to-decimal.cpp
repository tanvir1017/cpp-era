#include <iostream>
using namespace std;


// convert any binary code to decimal
int binary_to_decimal(int binary){
    int ans = 0, pow = 1;
        while (binary > 0){
            int reminder = binary % 10;
            binary /= 10;

            ans += reminder * pow;
            pow *= 2;
        }
        return ans;
}

int main(){

    cout << binary_to_decimal(1010) << endl;
    return 0;
}