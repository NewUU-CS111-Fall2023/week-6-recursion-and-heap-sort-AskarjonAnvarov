/*
 * Author: Asqarjon Anvarov
 * Date: 23.11.23
 * Name: Task 2
 */
#include <iostream>
using namespace std;


bool isPowerOfTwo(int n) {
  
    if (n <= 0) {
        return false;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    return n == 1;
}

int main() {
   
    int N;
    cin >> N;

    if (isPowerOfTwo(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
