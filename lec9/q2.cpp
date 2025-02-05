#include <iostream>
using namespace std;

int printsum( int arr[],int n){
    
    int sum=0;
    for (int i=0 ;i<n ;i++){
        sum += arr[i];
       
    }
     cout << "Sum so far : " << sum << endl;  //return sum

   return 0;
}

int main (){
    int nidhi[]={12,23,34,45,56,67,78,89,90};
    int n=sizeof(nidhi)/sizeof(nidhi[0]);

   printsum(nidhi ,n);
//    or
//    int b=printsum(nidhi ,n);
    // cout << "The sum of the array elements is : " << b << endl;
    return 0;
}