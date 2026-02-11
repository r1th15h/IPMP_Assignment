#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;
    ListNode *h1 = list1;
    ListNode *h2 = list2;
    ListNode *main = nullptr;
    ListNode *temp = nullptr;
    while(h1!=nullptr && h2!=nullptr){
        if(main==nullptr){
            if(h1->val <= h2->val){
                main = list1;
                h1 = h1->next;
            }
            else{ 
                main = list2;
                h2 = h2->next;
            }
            temp = main;
        }
        else if(h1->val>h2->val){
            temp->next = h2; 
            h2 = h2->next;
            temp = temp->next;
        }
        else{
            temp->next = h1; 
            h1 = h1->next;
            temp = temp->next;
        }
    }
    if (h1 != nullptr) temp->next = h1;
    else temp->next = h2;
    return main;
}