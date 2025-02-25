#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* ptr;
};

bool isLoop(node* head){
    node* temp = head;
    

}
typedef struct node Node;
int main(){
    node* head = nullptr;
    node* temp = nullptr;
    int choice  =1 ;
    while(choice ){
        node* newnode = new node;
        cin >> newnode->data;
        newnode->ptr = nullptr;
        if(head!=nullptr){
            temp->ptr = newnode;
            temp = newnode;
        }
        else
        head = temp = newnode;
        cin >> choice;
    }
}