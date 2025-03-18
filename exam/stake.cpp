#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int index,size;

    stack(int n){
        this->size=n;
        arr= new int[n];
        index=-1;
    }

    void stackpush(int value){
        if(index < size){
        arr[++index]=value;
        cout  << value << endl;
        }
        else{
            cout<<"this is full"<<endl;
        }
    }
};

int main(){

stack s(5);
s.stackpush(10);
s.stackpush(4);
s.stackpush(2);
s.stackpush(1);
s.stackpush(5);
s.stackpush(6);
s.stackpush(7);
s.stackpush(8);



    return 0;
}