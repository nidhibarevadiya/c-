#include <iostream>
using namespace std;

bool print(int arr[], int n){
   
  for(int i=0 ;i<n-1;i++){
    if (arr[i]>arr[i+1])
    {
        return false;
    }
    
  }  
  return true; 
}

 int main(){
    int m []={2,1,6,8,10,12,13,14};
  int n=sizeof(m)/sizeof(m[0]);

bool b=print(m,n);
cout << b << endl;
    return 0;
 }