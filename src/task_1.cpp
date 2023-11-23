/*
 * Author: Asqarjon Anvarov
 * Date: 23.11.23
 * Name: Task 1
 */
#include <iostream>
using namespace std;

void PrintRange(int start, int end, int step) {
    if (start == end) {
        cout << start << " ";
        return;
    }
    cout << start << " ";
    PrintRange(start + step, end, step);
}

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        PrintRange(x, y, -1);
    } else {
        PrintRange(x, y, 1);
    }

    return 0;
}
