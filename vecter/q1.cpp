#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>arr={11,2,45,33,65,44};
      arr.push_back(12);
     
    for (int i=0;i<arr.size();i++){
      
        cout << arr[i] << endl;
    }
cout << endl;
       arr.pop_back();
    for (int i=0;i<arr.size();i++){
      
        cout << arr[i] << endl;
    }
    return 0;
}