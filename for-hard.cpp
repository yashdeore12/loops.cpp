#include<iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for(; num > 0; num = num / 10) {
        int digit = num % 10;
        sum += digit;
    }

    cout << "Sum of digits = " << sum << endl;
    return 0;
}
