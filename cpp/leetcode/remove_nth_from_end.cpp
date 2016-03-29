//
//  remove_nth_from_end.cpp
//  leetcode-2016
//
//  Created by stuff on 29/3/16.
//  Copyright (c) 2016 tony. All rights reserved.
//

#include <stdio.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {};
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *begin = head;
        ListNode *current = head;
        for (int i=0; i < n; i++) {
            current = current->next;
        }
        if (!current) { // input length is 1 and n is 1, return empty list
            return head->next;
        }
        // use current and begin make a ruler which length is n
        // begin and current move forward at the same time
        // when current is the last node, begin is the Nth node from the end;
        while (current->next) {
            begin = begin->next;
            current = current->next;
        }
        // remove Nth node
        begin->next = begin->next->next;
        return head;
    }
};