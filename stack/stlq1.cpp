#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int>s;
s.push(10);
s.push(45);
s.push(30);

cout<<s.top()<<endl;

s.pop();
cout<<s.size()<<endl;
cout <<s.empty()<<endl;

cout<<s.top()<<endl;


    return 0;
}