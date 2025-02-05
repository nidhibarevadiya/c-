#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int> >matrix={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
    int row = matrix.size();
    int col = matrix[0].size();

   for (int j=row-1; j >=0 ; j--){
      for (int i=col-1; i >=0; i--){
        if (j==i){
         cout << matrix[j][i] << " ";
        }
   
   }
   cout << endl;
   }

    return 0 ;
}