 #include <iostream>
 

 // get binary from decimal

int get_binary (int decimal_num) {
    int ans = 0; // binary
    int power = 1; //

    while (decimal_num > 0){
        int reminder = decimal_num % 2;
        decimal_num /= 2;
        ans += (reminder * power);
        power *= 10;
    }

    return ans;
}

 int main(){

     std::cout << get_binary(10) << std::endl;
     return 0;
 }