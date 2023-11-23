/*
 * Author: Asqarjon Anvarov
 * Date: 23.11.23
 * Name: Task 8
 */
#include <iostream>
#include <string>

#define max(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

string add(string lhs, string rhs);
string subtract(string lhs, string rhs);
string multiply(string lhs, string rhs);

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << multiply(s1, s2) << endl;
    return 0;
}

string add(string lhs, string rhs) {
 
}

string subtract(string lhs, string rhs) {
  
}

string multiply(string lhs, string rhs) {
    int length = max(lhs.size(), rhs.size());
    int half_length = length / 2;

    string firstTerm = multiply(lhs0, rhs0);
    string secondTerm = multiply(lhs1, rhs1);
    string crossTerm = multiply(add(lhs0, lhs1), add(rhs0, rhs1));
    string subtractedTerm = subtract(crossTerm, add(firstTerm, secondTerm));

    for (int i = 0; i < 2 * half_length; i++)
        firstTerm.append("0");
    for (int i = 0; i < half_length; i++)
        subtractedTerm.append("0");

    string result = add(add(firstTerm, secondTerm), subtractedTerm);

    return result.erase(0, min(result.find_first_not_of('0'), result.size() - 1));
}
