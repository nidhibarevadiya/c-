#include <iostream>
using namespace std;

class students{
    public:
    string name;
    int age;
    string course;
    int number;

    students(string name, int age, string course, int number){
        this -> name =name;
        this -> age = age;
        this -> course = course;
        this -> number = number;
    }

    void print(){
        cout << "name:" << this -> name;
        cout << ", age:" << this -> age;
        cout << ", course:" << this -> course;
        cout << ", number:" << this -> number ;
    }
};

int main (){

    students s("nidhi",22,"fullstack",45);
    // cout<< s.age<<" "<< s.course<<" "<< endl;   //
    s.print();

    return 0;
}


// students s;
// s.name="nidhi";
// s.age=22;
//     cout<< s.age<<" "<< s.name<<" "<< endl;


