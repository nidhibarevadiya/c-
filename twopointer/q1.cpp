#include <iostream>
using namespace std;

int main(){

 int arr[5]={2,4,6,8,10};

 for (int i=0;i<5;i++){
    cout << arr[i] << " ";

 }
 cout << endl;
 
 int i=0;
int j=4;

while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  
    i+1;
    j-1;
   cout << arr[i] << " " << arr[j] << endl;
}
    return 0;
}
