#include <iostream>
using namespace std;

class NODE
{    
    public:
    int data;
    NODE *next;

    NODE(int data){
        this -> data=data;
        next = nullptr;        
    }
};

class linklist{

public:
NODE *head;
linklist(){
    this->head=nullptr;
}

void inserttail(int data){
    NODE *newnode = new NODE(data);
    if(head == nullptr){
        head = newnode;
        return;
    }
    NODE *temp =head ;
    while(temp ->next != nullptr){
        temp =temp->next;
    }
    temp->next=newnode;

   
}
void printlist(){
    NODE *temp =head;
    while(temp){
        cout << temp->data <<"="<<temp->next<<"->";
        temp = temp->next;
    }
}
};


int main(){
linklist *list =new linklist();

list->inserttail(10);
list->inserttail(20);
list->inserttail(30);
list->inserttail(40);

list->inserttail(10);
list->inserttail(20);
list->inserttail(30);
list->inserttail(40);


list->printlist();


    return 0;
}