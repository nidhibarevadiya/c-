#include <iostream>
using namespace std;

int mul(int n){
    if (n==1){
        return 1;
    }
   
 return n*mul(n-1);  
    
}

int main(){
   cout << "mul:" << mul(5) << endl;
    return 0;
}