#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* swapNodes(ListNode* head, int k) {
    ListNode *start = head;
    ListNode *end = head;
    ListNode *temp = head;
    for(int i=1;i<k;i++){
        temp = temp->next;
    } 
    start = temp;
    while(temp->next){
        temp = temp->next;
        end = end->next;
    }
    int temp1 = end->val;
    end->val = start->val;
    start->val = temp1;
    return head;
}