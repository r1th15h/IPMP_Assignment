#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode *temp = head;
    while(temp){
        ListNode *temp1 = temp->next;
        while(temp1 && temp->val==temp1->val){
            temp1 = temp1->next;
        }
        temp->next = temp1;
        temp = temp->next;
    }
    return head;
}