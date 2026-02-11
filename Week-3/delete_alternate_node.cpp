#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};

void deleteAlt(struct Node *head) {
    Node *temp = head;
    while(temp && temp->next){
        Node *deleted = temp->next;
        temp->next = deleted->next;
        delete deleted;
        temp = temp->next;
    }
    return;
}