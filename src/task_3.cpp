/*
 * Author: Asqarjon Anvarov
 * Date: 23.11.23
 * Name: Task 3
 */
#include <iostream>
using namespace std;


int sumOfDigits(int n) {
    int sum = 0;

   
    while (n != 0) {
     
        sum += n % 10;
       
        n /= 10;
    }

    return sum;
}

int main() {

    int N;
    cin >> N;

    cout << sumOfDigits(N) << endl;

    return 0;
}
