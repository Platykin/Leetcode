#include <iostream>
#include <string>
#include <math.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum1{0}, sum2{0};
        for (int i{0}; i < l1.size(); i++){
            sum1 += l1[i] * pow(10, i); 
        }
        for (int i{0}; i < l2.size(); i++){
            sum2 += l1[i] * pow(10, i); 
        }
        int res{sum1 + sum2};    
        std::to_string(res);
        
    }
};