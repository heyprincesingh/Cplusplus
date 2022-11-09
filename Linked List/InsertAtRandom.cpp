#include<iostream>
using namespace std;

struct insert{
    int data;
    insert* next;
}*head=NULL;

int create(int arr[],int n){
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

int display(){
    insert* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int insertRandom(int value, int place){
    insert* temp = head;
    insert* t = new insert();
    int i = 1;
    while(i != place){
        temp = temp->next;
        i++;
    }
    t->data = value;
    t->next = temp->next;
    temp->next = t;
}

int main(){
    int arr[4] = {10,20,30,40};
    create(arr,4);
    cout<<"Before inserting => ";
    display();
    insertRandom(15,1);
    cout<<"After inserting => ";
    display();
}