/*
 * Author: Asqarjon Anvarov
 * Date: 23.11.23
 * Name: Task 7
 */
#include <iostream>
using namespace std;

int reverseDigitsHelper(int n, int reversed = 0) {
    if (n == 0) {
        return reversed;
    } else {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;

        return reverseDigitsHelper(n / 10, reversed);
    }
}

int reverseDigits(int n) {
    return reverseDigitsHelper(n);
}

int main() {
    int n;
    cin >> n;

    int reversed = reverseDigits(n);
    cout << reversed << endl;

    return 0;
}
