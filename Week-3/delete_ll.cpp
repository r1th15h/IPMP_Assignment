#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteLL(ListNode* head) {
    while(head){
        ListNode* next = head->next;
        delete head;
        head = next;
    }
    return nullptr;
}