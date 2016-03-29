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
    vector<int> countBits(int num) {
        vector<int> all_num;
        for (int i = 0 ; i <= num; i++) {
            if (i == 0) {
                all_num.push_back(0);
                continue;
            }
            if (i == 1) {
                all_num.push_back(1);
                continue;
            }
            int log_result = log2(double(i));
            int remain = i - pow(2, log_result);
            if (remain == 0) {
                all_num.push_back(1);
            }else{
                all_num.push_back(1 + all_num[remain]);
            }
        }
        return all_num;
    }
};