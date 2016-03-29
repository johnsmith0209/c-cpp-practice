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
    int singleNumber(vector<int> nums) {
        int rzt = 0;
        for (int i : nums) {
            rzt ^= i;
        }
        return rzt;
    }
};