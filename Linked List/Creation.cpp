#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

printStruct(node* p){
    while(p!=NULL){
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<"NULL";
}

int main(){
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 25;
    head->next = second;

    second->data = 26;
    second->next = third;

    third->data = 27;
    third->next = NULL;

    printStruct(head);

    return 0;
}