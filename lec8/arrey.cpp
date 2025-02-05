#include  <iostream>
using namespace std;
int main(){
    string name[3]={"nidhi", "jensi","yashvi"};
    int age[5]={22,24,19,34,23};
    for (int i=0;i<3;i++){
        cout << "name is  " << name[i] << endl;
    }
    for(int i=0; i<5;i++){
        cout << "age is  " << age[i] << endl;
        
    }
    return 0;
}