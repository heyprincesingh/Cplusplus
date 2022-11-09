#include<iostream>
using namespace std;

struct insert{
    int data;
    insert* next;
}*head=NULL;

void display(){
    insert* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void create(int arr[],int n){

    head = new insert();
    insert* temp = new insert();

    head->data = arr[0];
    head->next = temp;

    for(int i=1;i<n;i++){
        insert* t = new insert();
        temp->data = arr[i];
        if(i == n-1){
            temp->next = nullptr;
            break;
        }
        temp->next = t;
        temp = t;        
    }

}

void InsertAtFirst(int a){
    insert* temp = new insert();
    temp->data = a;
    temp->next = head;
    head = temp;
}

int main(){
    int arr[4] = {10,20,30,40};
    create(arr,4);
    display();
    InsertAtFirst(5);
    display();
}