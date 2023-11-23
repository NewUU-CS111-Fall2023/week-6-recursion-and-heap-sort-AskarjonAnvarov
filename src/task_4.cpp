/*
 * Author: Asqarjon Anvarov
 * Date: 23.11.23
 * Name: Task 4
 */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n, int divisor = 2) {
    if (n <= 1) {
        return false; 
    } else if (divisor > sqrt(n)) {
        return true; 
    } else if (n % divisor == 0) {
        return false;  
    } else {

        return isPrime(n, divisor + 1);
    }
}

int main() {

    int n;
    cin >> n;

    if (isPrime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
