#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b: ";
    cin>>b;
    int count=0;
    for(int i=1; i<=a;i++)
    {
        for(int j=1; j<=b ; j++)
        {
            if(j-i==0){
                cout<<count<<endl;
            }
        }
    }
    return 0;
}