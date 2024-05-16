#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(const string& str1, const string& str2) {

    string sorted_str1 = str1;
    string sorted_str2 = str2;
    sort(sorted_str1.begin(), sorted_str1.end());
    sort(sorted_str2.begin(), sorted_str2.end());

    return sorted_str1 == sorted_str2;
}

int main() {
    string string1, string2;

    cout << "Masukkan string pertama: ";
    cin >> string1;
    cout << "Masukkan string kedua: ";
    cin >> string2;


    if (isAnagram(string1, string2)) {
        cout << "Output: \"anagram\"" << endl;
    } else {
        cout << "Output: \"tidak anagram\"" << endl;
    }

    return 0;
}