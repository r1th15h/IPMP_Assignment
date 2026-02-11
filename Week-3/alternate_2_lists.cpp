#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

vector<ListNode*> alternateLists(ListNode* head) {
    if(head == nullptr) return vector<ListNode*>{nullptr};
    ListNode *h1 = head;
    ListNode *h2main = head->next;
    ListNode *h2 = head->next;
    while(h1 && h2 && h1->next && h2->next){
        h1->next = h1->next->next;
        h2->next = h2->next->next;
        h1 = h1->next;
        h2 = h2->next;
    }
    h1->next = h2main;
    return vector<ListNode*>{h1,h2main};
}