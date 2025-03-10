#include <iostream>
using namespace std;

class   ADD{
    public:
    int a;
    int b;

    ADD(int a ,int b){
        this -> a=a;
        this -> b=b;

    }

    int sum(){
        return a+b;
    }
};

class  ADDSUB : public ADD{
    public:
    int c;
    int d;

    ADDSUB(int a ,int b, int c, int d) : ADD(a,b){
        this -> c=c;
        this -> d=d;
    }

    int sub(){
        return c-d;
    }
};

int main(){

    ADDSUB nidhi(1,2,3,4);
    cout<<"Sum: "<<nidhi.sum()<<endl;
    cout<<"Sub: "<<nidhi.sub()<<endl;
    return 0;
}