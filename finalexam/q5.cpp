#include <iostream> 
using namespace std;
class node{
    public:
    int num; 
    node *next;
};
class node *head=NULL; 
void insertNode(int n){
   node *new_node=new node;
    new_node->num=n; 
    new_node->next=head;
    head=new_node;
}
void reverse() {
   
    node* current = head;
    node *prev = NULL, *next = NULL;

    while (current != NULL) {
       
        next = current->next;
        
        current->next = prev;
        
        prev = current;
        current = next;
    }
    head = prev; 
}
void displaynodes() {
    struct node *temp = head; 
    while(temp != NULL) { 
        cout << temp->num << " -> "; 
        temp = temp->next; 
    }
    cout << endl;
}

int main(){
    insertNode(5); 
    insertNode(4); 
    insertNode(3); 
    insertNode(2); 
    insertNode(1);
    displaynodes(); 
    reverse();
    displaynodes(); 

    return 0; 
}