#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
/*Input a string of length less than 10 and convert it into integer without using builtin function.*/

int stringToInt(string& str) {
    int result = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i]-'0');
        } else {
            cout << "Invalid input. Please enter a numeric string.\n";
            return 0;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int num = stringToInt(str);
    cout << "The integer value is: " << num << "\n";
    return 0;
}
