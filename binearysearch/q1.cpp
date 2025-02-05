#include<iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int>arr,int t){
    int start=0;
    int end=arr.size()-1;

    while(start <= end){
        int mid=(start+end)/2;
        if(arr[mid]==t){
            return mid;
        }
        else if(arr[mid] < t){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    int t=5;
    int result=binarysearch(arr,t);
    cout<<result<<endl;
    return 0;
}