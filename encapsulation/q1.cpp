#include <iostream>
using namespace std;

class test{
    private:
    int x;

    public:
    test(int x){
        this -> x=x;
    }
    int getx(){
        return this->x;
    }
    void setx(int x){
        this->x=x;
    }
 
};

int main(){
  
    test t(10);
    // t.setx(20); 
    cout << t.getx() << endl;
    return 0;
 }
