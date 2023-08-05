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
    ListNode* ans = new ListNode();
    ListNode* current1 = l1;
    ListNode* current2 = l2;
    ListNode* currentAns = ans;
    int carry = 0;
    while (current1 != nullptr || current2 != nullptr || carry != 0){
        int sum = (current1 != nullptr ? current1->val : 0) + (current2 != nullptr ? current2->val : 0) + carry;
        carry = sum / 10;

        if(current1 != nullptr || current2 != nullptr || carry != 0){
            currentAns->next = new ListNode(sum%10);
            currentAns = currentAns->next;
        }
        if(current1 != nullptr){
            current1 = current1->next;
        }
        if(current2 != nullptr){
            current2 = current2->next;
        }

    }
    return ans->next;
}

int main(){
    return 0;
}