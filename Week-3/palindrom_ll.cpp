#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode* head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast) slow = slow->next;
    ListNode *head2 = slow;
    ListNode *prev = nullptr;
    ListNode *next = nullptr;
    slow = head;
    while(head2!=nullptr){
        next = head2->next;
        head2->next = prev;
        prev = head2;
        head2 = next;
    }
    head2 = prev;
    while(head2!=nullptr){
        if(slow->val!=head2->val) return false;
        slow = slow->next;
        head2 = head2->next;
    }
    return true;

}