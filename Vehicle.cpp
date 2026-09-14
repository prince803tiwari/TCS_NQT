#include<iostream>
#include<cmath>
using namespace std;

// The TCS NQT Two-Wheeler and Four-Wheeler problem requires calculating the number of two-wheelers (TW) and four-wheelers (FW) produced given the total number of vehicles (
// V) and total wheels (
// W)

// Problem Logic:
// FW = ((w-2v)/2)
// TW = V-FW


int main() {

    int V = 200;
    int W = 540;

    if (W < 2 || W % 2 != 0 || W < 2 * V) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int fw = (W - 2 * V) / 2;
    int tw = V - fw;

    cout << "Two Wheelers = " << tw << endl;
    cout << "Four Wheelers = " << fw << endl;

    return 0;
}