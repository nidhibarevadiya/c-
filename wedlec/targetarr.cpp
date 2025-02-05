#include <iostream>
using namespace std;
int print(int arr[], int n ){
    int t;
    cin >> t ;
    for (int i = 0; i < n; i++){
        if(arr[i] == t){
           return i;
        }
    }
    return -1;
}

int main() {
   
    int arr[5]={5,10,50,1,100};
    
 int result=print(arr,5);
 cout << result << endl;
    return 0;
}
