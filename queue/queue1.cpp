#include <iostream>
using namespace std;

class Queue {
    public :
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        this->front = -1;
        this->rear = -1;
    }

    void enQueue(int val){
        if(front == -1 && rear == -1){
            arr[++rear] = val;
            front++;
        }
        else {
          
            arr[++rear] = val;
    
    }
}

    int deQueue(){
        if(front == -1 || front > rear){
            cout<<"Queue is empty";
            return -1;
        }
        else {
            return arr[front++];
        }
    }
    int getFront(){
        if (front != -1){
            return arr[front];
        }
        else {
            cout<<"Queue is empty";
            return -1;
        }
    }
     
    int getrear(){
        return arr[rear];
    }
};

int main (){

    Queue *q=new   Queue(5);
    q->enQueue(1);
    q->enQueue(2);
    q->enQueue(3);

    return 0;
}