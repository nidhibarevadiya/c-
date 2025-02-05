#include <iostream>
using namespace std;
void print(int n){
       for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = n; j <= n - i; j++) {
            cout << "_ ";
        }
        // Print numbers
        for (int j = n; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >>n;
    print(n);
    return 0;
}
