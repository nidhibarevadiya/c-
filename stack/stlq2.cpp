#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<char>s;

string str="test";
for(int i=0 ; i<str.length();i++){
    s.push(str[i]);
}
string str2 ="";

while(!s.empty()){
    str2+=s.top();
    s.pop();
}
cout << str2 << endl;







    return 0;
}