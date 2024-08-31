#include <string>
#include <algorithm>
#include<iostream>
using namespace std;
//check whether a given string is palindrome or not.

bool isPalindrome(string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str)) {
        cout << str << " is a palindrome.\n";
    } else {
        cout << str << " is not a palindrome.\n";
    }
    return 0;
}
