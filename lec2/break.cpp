#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number n:";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==5){
            continue;   //break;
        }
         cout<< i <<endl;
    }
   

    return 0;
}