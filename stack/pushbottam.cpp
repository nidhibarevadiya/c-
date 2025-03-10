#include <iostream>
#include <stack>
using namespace std;

void insertbottom(stack<int>  &s,int value)
{
   if(s.empty())
   {
    s.push(value);
    return;
}
int top = s.top();
    s.pop();
    insertbottom(s,value);
   s.push(top);
}

void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    
 
    
    insertbottom(s,40);
       
    print(s);
    
    return 0;
    
}