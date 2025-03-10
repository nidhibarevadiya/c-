#include <iostream>
using namespace std;

class bank{
private:
string name;
int accounno;
int balance;

public: 
bank(string name, int accounno ,    int balance){
    this -> name=name;
    this -> accounno=accounno;
        this-> balance =balance;
}

string getname(){
   cout << name;
}
void setname(string name){

    this -> name = name;

}

void checkbalance(){
    cout << balance << endl;
}
void deposit(int ammount){
    balance +=ammount;
    cout << balance << endl;
}

void withdraw(int ammount){
    if (checkbalance1(ammount)){
        balance -= ammount;
        cout << balance << endl;
    }
    else{
        cout << "can't witdhdrow  balance" << endl;
    }
 
}

bool checkbalance1(int ammount){
    if(this->balance >= ammount){
        return true;
    }
    else{
        return false;
    }
}
};

int main(){

    bank b("nidhi", 12345678, 1000);
   
    // cout<<b.getname()<<endl;
    b.checkbalance();
    b.deposit(500);
    b.checkbalance();
    b.withdraw(1500);
    b.checkbalance();
    return 0;
}