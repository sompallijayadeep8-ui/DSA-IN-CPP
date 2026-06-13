#include<iostream>
using namespace std;
bool isPalindrome(string s, int start, int end) {
    if (start >= end) {
        return true; // Base case: empty string or single character is a palindrome
    }
    if (s[start] != s[end]) {
        return false; // If characters at start and end are different, it's not a palindrome
    }
    return isPalindrome(s, start + 1, end - 1); // Recursive call for the next pair of characters
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}