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




int main() {
    int n, target;
    cout << "Enter the number  of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    twoSumBru(arr, n, target);

    
    return 0;
}


