//
//  main.cpp
//  leetcode-2016
//
//  Created by stuff on 28/3/16.
//  Copyright (c) 2016 tony. All rights reserved.
//

#include <iostream>
//#include "counting_bits.cpp"
//#include "add_digits.cpp"

#include "expression_add_operators.cpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    Solution s;
//    s.countBits(10);
    Solution s;
    vector<string> res = s.addOperators("123", 9);
    for (auto str : res) {
        cout << str << endl;
    }
//    int rzt = s.addDigits(1000);
//    cout << "Rzt: " << rzt << endl;
    return 0;
}
