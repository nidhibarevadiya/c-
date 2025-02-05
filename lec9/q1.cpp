#include <iostream>
using namespace std;


bool targetsum(int arr[], int n){
    int t;
    cout << "enter the target value :";
    cin >> t ;
    for (int i=0; i <n-1 ; i++){
        for (int j=i+1; j < n ; j++)
        {
            if ((arr[j]+arr[i])==t)
            {
              return true;
            }
        }
    }
    return false;
}

int main(){
    int n;
    cout << "enter the size of array:";
    cin >> n;


    int nidhi [n];
 for (int i=0; i<n ; i++){

    cout << "enter the value of the index " << i << ":" ;
  cin >> nidhi[i];
 }

 bool re =targetsum(nidhi,n);
 cout << re << endl;
    return 0;
}
