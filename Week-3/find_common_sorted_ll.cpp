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

Node* findIntersection(Node* head1, Node* head2) {
    Node* h1 = head1;
    Node *h2 = head2;
    Node* head = nullptr;
    Node *tail = head;
    while(h1 && h2){
        if(h1->data == h2->data){
            Node *newnode = new Node(h1->data);
            if(head==nullptr){
                head = newnode;
                tail = head;
            }
            else{
                tail->next = newnode;
                tail = newnode;
            }
            h1=h1->next;
            h2=h2->next;
        }
        else if(h1->data < h2->data){
            h1 = h1->next;
        }
        else{
            h2 = h2->next;
        }
    }
    return head;
}
