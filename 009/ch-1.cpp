// Solution of Task 1 of The Weekly Challenge 9
// https://theweeklychallenge.org/blog/perl-weekly-challenge-009/

// Test run:
// $ ./a.out
// n = 113
// n^2 = 12769

#include<math.h>
#include<string>
#include<iostream>
#include<map>

using namespace std;

int countDigits(int n) {
    string s = to_string(n);
    map<char, int> digits;

    for (int c = 0; c != s.size(); c++) {
        digits[s[c]] = 1;
    }

    return digits.size();
}

int main() {
    int n = (int) sqrt(10000); // To start with a number whose square has 5 digits.
    bool isFound = false;
    while(!isFound) {
        int n2 = n * n;
        if (countDigits(n2) >= 5) {
            isFound = true;
            cout << "n = " << n << endl;
            cout << "n^2 = " << n2 << endl;
        }
        else {
            n++;
        }
    }        
}
