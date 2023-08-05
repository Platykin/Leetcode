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

        currentAns->next = new ListNode(sum%10);
        currentAns = currentAns->next;
    
        current1 = (current1 != nullptr) ? current1->next : nullptr;
        current2 = (current2 != nullptr) ? current2->next : nullptr;

    }
    return ans->next;
}

int main(){
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = addTwoNumbers(l1, l2);

    // Imprimir o resultado
    while (result != nullptr) {
        std::cout << result->val << " ";
        result = result->next;
    }


    return 0;
}