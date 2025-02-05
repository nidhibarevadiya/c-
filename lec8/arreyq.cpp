#include <iostream>
using namespace std;

void evenvalue(int arr[]){
    for (int i=0;i<5;i++){

        if(arr[i]%2==0){
            cout << arr[i] << endl;
        }
    }
}

void oddvalue(int arr[]){
    for (int i=0 ; i<5 ; i++)
    {
        if (arr[i]%2!=0)
        {
            cout << arr[i] << endl;
        }
    }
}

void even(int arr[5]){
   

    for (int i=0; i<5 ; i++){
        if (i%2==0)
        {
            cout << i  << " : " << arr[i] << endl;
        }
    }
}


int main(){
    int arr[5]={11,22,33,44,55};
    evenvalue(arr);

    cout << "odd value" << endl;
    oddvalue(arr);
   

    cout << "index of even value " << endl;
    even(arr);
     return 0;
}