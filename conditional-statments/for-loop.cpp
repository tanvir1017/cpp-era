#include <iostream>
using namespace std;

int main(){
    int total_sum = 0;
    for (int i = 0, n = 7; i <= n; i++)
    {
        total_sum += i;
        //cout << i + 1 << " | ";
    }

    cout << "sum = " << total_sum << endl;
    return 0;
}