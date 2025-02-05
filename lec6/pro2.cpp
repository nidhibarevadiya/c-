#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int sum=0;
    int count=0;
    for (int i=1; i<=n ; i++) 
    {
        for (int j=1; j<=n ; j++)
        {
            sum=i+j;
            if ((sum%3&&5)==0)
            {
                cout <<count << endl;
            }
        }
    }
    return 0;
}