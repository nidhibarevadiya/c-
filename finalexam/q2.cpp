#include <iostream>
#include <unordered_map>
using namespace std;


void twoSumBru(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices of the two numbers " << i << ", " << j << endl;
                return;
            }
        }
    }
    cout << "No pair found " << endl;
}


void twoSumOpt(int arr[], int n, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (numMap.find(complement) != numMap.end()) {
            cout << "Indices of the two numbers: " << numMap[complement] << ", " << i  << endl;
            return;
        }
        numMap[arr[i]] = i;
    }
    cout << "No pair found using Optimized approach." << endl;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    twoSumBru(arr, n, target);
    twoSumOpt(arr, n, target);
    
    return 0;
}






