/*
 * Author: Asqarjon Anvarov
 * Date: 23.11.23
 * Name: Task 10
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const string VOWEL_SET = "lYmpH";

string sortVowelsInCustomOrder(string s) {
    vector<pair<int, char>> vowels;

    for (int i = 0; i < s.length(); ++i) {
        if (VOWEL_SET.find(s[i]) != string::npos) {
            vowels.emplace_back(i, s[i]);
        }
    }

    if (!vowels.empty()) {
        sort(vowels.begin(), vowels.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
            if (tolower(a.second) == tolower(b.second)) {
                return a.second < b.second;
            }
            return tolower(a.second) < tolower(b.second);
        });

        for (const auto& vowel : vowels) {
            s[vowel.first] = vowel.second;
        }
    }

    return s;
}

int main() {
    string s = "newUzbekiStanunIverSIty";
    cout << sortVowelsInCustomOrder(s) << endl;

    return 0;
}
