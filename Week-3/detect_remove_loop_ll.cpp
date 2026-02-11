#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void removeCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(slow != fast) return;
    slow = head;
    while(slow!=fast){
        fast = fast->next;
        slow = slow->next;
    }
    ListNode *temp = slow->next;
    while(temp->next != slow){
        temp = temp->next;
    }
    temp->next = nullptr;
    return;
}