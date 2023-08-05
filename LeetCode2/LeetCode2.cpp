#include <iostream>
#include <vector>

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int value) : val(value), next(nullptr) {};
    ListNode(int value, ListNode* nest) : val(value), next(next) {};
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* ans = nullptr;
    ListNode* current1 = l1;
    ListNode* current2 = l2;
    while (current1 != nullptr || current2 != nullptr){
        ans->val = current1->val + current2->val;
        if(current1 != nullptr){
            current1 = current1->next;
        }
        if(current2 != nullptr){
            current2 = current2->next;
        }
        ans->next = new ListNode();     
    }

    ListNode* p = ans;
    while (p != nullptr){
        if (p->val / 10 != 0){
            p->val -= 10;
            (p->next)->val += 1;
        }
        p = p->next;
    }
    return ans;
}

int main(){

    return 0;
}