//
//  counting_bits.cpp
//  leetcode-2016
//
//  Created by stuff on 28/3/16.
//  Copyright (c) 2016 tony. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num < 10) {
            return num;
        }
        int sum = 0, base_digit = 10;
        while (1) {
            int remain = num % base_digit;
            int multi = num / base_digit;
            cout << "num: " << num << ", base_digit: " << base_digit
            << ", multi: " << multi << ", remain: " << remain << endl;
            sum += remain;
            num -= multi * base_digit;
            base_digit *= 10;
            if (num <=0)
                break;
        }
        
        return addDigits(sum);
    }
};