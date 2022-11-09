#include<iostream>
using namespace std;

struct deletion{
    int data;
    deletion* next;
}*head=NULL;

void input(int arr[],int n){

    head = new deletion();
    deletion* temp = new deletion();

    head->data = arr[0];
    head->next = temp;

    for(int i=1;i<n;i++){
        deletion* t = new deletion();
        temp->data = arr[i];
        if(i == n-1){
            temp->next = nullptr;
            break;
        }
        temp->next = t;
        temp = t;
    }

}

void deleteNode(int position){
    deletion* f = head;
    deletion* s = head;
    s = f->next;
    int i = 1;
    while(i!=position){
        f = f->next;
        s = f->next;
        i++;
    }
    f->next = s->next;
}

void display(int n){
    deletion* temp = head;
    while(temp != NULL){
        cout<<temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int main(){
    int arr[] = {1,2,3,4};
    input(arr,4);
    cout<<"Before deleting => ";
    display(4);
    deleteNode(2);
    cout<<"After deleting  => ";
    display(4);
    return 0;
}