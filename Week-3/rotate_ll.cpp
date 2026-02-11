#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* rotateRight(ListNode* head, int k) {
    if(head==nullptr) return nullptr;
    if(head->next == nullptr || k==0 ) return head;
    ListNode *main = head;
    ListNode *track = head;
    ListNode *h = head;
    int c = 0;
    while(main!=nullptr){
        main = main->next;
        c++;
    }
    k = k%c;
    if(k==0) return head;
    main = head;
    for(int i=0;i<k;i++){
        main = main->next;
    }
    while(main->next!=nullptr){
        track = track->next;
        main = main->next;
    }
    main = track->next;
    h = track->next;
    track->next = nullptr;
    while(main->next != nullptr){
        main = main->next;
    }
    main->next = head;
    return h;
}