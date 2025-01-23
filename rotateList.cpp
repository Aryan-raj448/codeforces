#include <bits/stdc++.h>
using namespace std; 

struct node {
    int data;
    struct node* next;
};
typedef struct node NODE;

NODE* rotateRight(NODE* head, int k) {
    if(head == NULL )
    return head;

    NODE *prev=head;
    NODE *last=head;
    NODE* start = head;
    int n=1;
    while (last->next!=NULL){
        last= last->next;
        n++;
    }
   
    k= k%n;
    if(k==0)
    return head;

    int x= n-1-k;
    for(int i=0; i<x; i++){
        prev = prev->next;
    }
    head = prev->next;
    prev->next = NULL;
    last->next = start;

    return head;



}

void printList(NODE* head){
    NODE* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    NODE *head = NULL;
    NODE *temp;
    
    int choice =1;
    while(choice){
        NODE *newnode = (NODE*)malloc(sizeof(NODE));
        cout << "Enter the data: ";
        cin >> newnode->data;
        newnode->next = NULL;
        if(head == NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        cout << "Do you want to continue?\n ";
        cin >> choice;
    }

    cout << "list entered: \n";
    printList(head);

    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;
    head = rotateRight(head, k);
    cout << "List after rotation: \n";
    printList(head);


    
    return 0;
} 