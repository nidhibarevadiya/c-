#include <iostream>

using namespace std;

// void print (int arr[],int n){
//     cout << "{" ;
//     for(int i=0; i<n ;i++){
//         cout << arr[i] << "," ;
//     }

//     cout << "}" ;

// }

// void max (int arr[],int n){
//     int maxva=arr[0];
//     for(int i=0; i<n ;i++){
        

//        if(maxva<arr[i]){
//         maxva=arr[i];
 
//        }
      
//     }

//      cout << "Max value is: " << maxva << endl;
// }

void min (int arr[],int n){
    int minva=arr[0];
    for(int i=0; i<n ;i++){
        

       if(minva>arr[i]){
        minva=arr[i];
 
       }
      
    }

     cout << "min value is: " << minva << endl;
}

int main() {
   
 int n;
 cout << "Enter the size of array: ";
 cin >> n;
 int arr[n];

for (int i =0 ; i <n ;i++)
{
    cout << "enter the index value "  << i << endl;
    cin >> arr[i];
   
}
// print(arr,n) ;

// max(arr,n);

min(arr,n);

 
    return 0;
}