#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<char>s;

string str="#ts#mt#node##j";
for(int i=0 ; i<str.length();i++){
    if(str[i]!= '#'){
        s.push(str[i]);
    }
    else if(str[i]=='#' && !s.empty()){
        s.pop();
    }
}
string str2 ="";

while(!s.empty()){
    str2=s.top()+str2;
    s.pop();
}
cout << str2 << endl;
    return 0;
}