#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> arr = {1,2,-3,4,-3,5,9,-20,2,10};
    int k;
    cin >> k;
    for(int i=0; i<k; i++){
        int temp = arr[arr.size()-1];
        for(int j=arr.size()-1; j>0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}