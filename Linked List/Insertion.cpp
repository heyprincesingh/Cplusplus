#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void input(int array[],int n){

    node* head = new node();
    node* temp = new node();

    head->data = array[0];
    head->next = temp;

    for(int i=0;i<n;i++){
        node* t = new node();
        temp->data = array[i];
        if(i==n-1){
            temp->next=nullptr;
            break;
        }
        temp->next=t;
        temp = t;
    }


    while( head != NULL ){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}

int main(){
    int arr[4] = {10,1,3,5};
    input(arr,4);
    return 0;
}