#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a:";
    cin>>a;

    for(int i=1 ;i<=a;i++)
    {
        for(int j=1;j<=a;j++){
            if(i<j)
            {
                cout << i+j << endl;
            }
        }
    }
    return 0;
}