#include <iostream>
using namespace std;
int main(){
    int currsum=0;
    for (int i=1; i<=3; i++)
    {
        int maxsum=0;
        for(int j=1; j<=3 ;j++)
        {
           currsum=j+j-i;
           if(currsum>maxsum) 
           {
            maxsum=currsum;
           
           }
           
        }
         cout<<maxsum<<endl; 
    }
    return 0;
}