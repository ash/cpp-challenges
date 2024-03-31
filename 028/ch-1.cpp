// Solution of Task 1 of The Weekly Challenge 28
// https://theweeklychallenge.org/blog/perl-weekly-challenge-028/

// $ g++ ch-1.cpp
// $ ./a.out 
// 19:00:03

#include<ctime>
#include<iostream>
#include<iomanip>

int main() {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    std::cout << std::setw(2) << std::setfill('0') << now->tm_hour << ':' 
              << std::setw(2) << std::setfill('0') << now->tm_min << ':'
              << std::setw(2) << std::setfill('0') << now->tm_sec << std::endl;
}
