#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* getReverse(ListNode* head,int k,int &count){
    if(k>count) return head;
    count-=k;
    ListNode *prev = nullptr;
    ListNode *next = nullptr;
    ListNode *curr = head;
    for(int i=0;i<k;i++){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = getReverse(curr,k,count);
    return prev;
}
ListNode* reverseKGroup(ListNode* head, int k) {
    int count = 0;
    ListNode *temp = head;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    }
    head = getReverse(head,k,count);
    return head;
}