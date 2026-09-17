// LEET CODE 168. Excel Sheet Column Title

// Easy

// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

// For example:

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...
#include <iostream>
#include <string>
using namespace std;

string convertToTitle(int columnNumber) {
    string result = "";
    while (columnNumber > 0) {
        char c = 'A' + (columnNumber - 1) % 26;
        result = c + result;
        columnNumber = (columnNumber - 1) / 26;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter column number: ";
    cin >> n;
    cout << "Excel Column Title: " << convertToTitle(n) << endl;
    return 0;
}