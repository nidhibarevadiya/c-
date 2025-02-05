// #include <iostream>
// using namespace std;

// int beswap(int arr[],int n){
   
// for (int i=0; i<n; i++){
//     cout << arr[i] << " " ;
// }

// return 0;
// }

// int afswap(int arr[],int n){
// for (int i=n-1; i>=0; i--){
//     cout << arr[i] << " " ;
// }
// return 0;
// }

// int main (){
//    int nidhi[]={12,23,34,45,56,67,78,89,90};
//     int n=sizeof(nidhi)/sizeof(nidhi[0]);



// beswap(nidhi,n);
// cout << endl;
// afswap(nidhi,n);



//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Swapping elements to reverse the array
    for (int i = 0; i < n / 2; i++) {
        // Swap arr[i] and arr[n - i - 1]
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Array after swapping: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}