#include <iostream>
#include <vector>
using namespace std;

int nearestvalue(vector<int>arr,int t, int i, int j){
    int start=i;
    int end=j;
  int result =-1;
    while(start <= end){
        int mid=int (start+end)/2;
        if(arr[mid]==t){
            return mid;
        }
        else if(arr[mid] > t){
           end=mid-1;
        }
        else{
           result=mid;
              start=mid+1;
        }
    }
    return result+1;
}
int main(){
     vector<int> arr={1,2,3,4,5,6,7,9};
   
    int result=nearestvalue(arr,8,0,arr.size()-1);
    cout<<arr[result]<<endl;
    return 0;
    
}