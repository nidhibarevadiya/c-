#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

for (int i=1; i<=n; i++) {
     cout << i << ":";
     int sum = 0;
    for (int j=1 ; j<=n ; j++)
    { 
       
        if (i%j==0)
        {
           
           sum+=j;
            cout << sum ;
        }
      
    }
     cout<<endl;
}
  
    return 0;
}