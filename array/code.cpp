#include <iostream>
using namespace std;

int main()
{
    int size = 6;
    int marks[size] = {10, 30, 40, 50, 2, 3, 30};

    int isLargeNumber = marks[0];

    for (int i = 0; i < size; i++)
    {
        if (marks[i] > isLargeNumber)
        {
            isLargeNumber = marks[i];
        }

        // cout << endl; // will make some empty string
    };

    cout << isLargeNumber << endl;

    return 0;
}