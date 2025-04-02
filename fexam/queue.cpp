
#include <iostream>
using namespace std;

class Queue {
public:
  int *arr;
  int size;
  int front;
  int rear;

  Queue(int size) {
    arr = new int[size];
    this->size = size;
    this->front = -1;
    this->rear = -1;
  }
  void enQueue(int val) {
    if (this->front == -1 && this->rear == -1) {
      arr[++this->rear] = val;
      this->front++;
    } else {
      arr[++this->rear] = val;
    }
  }

  int dequeue() {
    if (this->front != -1 && this->rear != -1) {
      if (this->front < this->rear) {
        arr[this->front++] = -1;
      } else {
        arr[this->front] = -1;
        this->front = -1;
        this->rear = -1;
      }
    }
  }

  int getfront() { return arr[front]; }
  int getrear() { return arr[rear]; }

 
};

int main() {
  Queue *q = new Queue(5);
  q->enQueue(10);
  q->enQueue(20);
  q->enQueue(30);

  cout << q->getfront() << endl;
  cout << q->getrear() << endl;



  q->dequeue();
  cout << queue->getfront() << endl;

  return 0;
}