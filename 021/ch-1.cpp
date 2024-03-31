// Solution of Task 1 of The Weekly Challenge 21
// https://theweeklychallenge.org/blog/perl-weekly-challenge-021/

/*
Test runs:
$ c++ ch-1.cpp

$ ./a.out 
2.71828

$ ./a.out 20
2.71828
*/

#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[]) {
    int max = 100;
    if (argc == 2) {
        max = atoi(argv[1]);
    }

    double e = 1;
    double factorial = 1;

    for (int n = 1; n < max; n++) {
        factorial *= n;
        e += 1 / factorial;
    }

    cout << e << endl;
}
