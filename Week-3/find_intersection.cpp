#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *ha = headA;
    ListNode *hb = headB;
    while(ha!=hb){
        ha = (ha==nullptr) ? headB : ha->next;
        hb = (hb==nullptr) ? headA : hb->next;
        if(ha==hb) return ha;
    }
    return ha;
}