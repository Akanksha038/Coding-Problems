#include <iostream>
using namespace std;

class Student{
    public :
    char name;
    int rollNo;

    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << name << " "  <<  rollNo;
    }
};

int main() {
    Student *s = new Student();
    s -> name = 'A';
    s -> rollNo = 15;
    s -> print();
}

//output=>at line 19 me jo s1 object bana h usme koi argument pass nahi kiya h ,lekin jo constructure class bana h student name se usme ek int argument pass kiya gay h so ham 
//aaise function ko call kiye h jisme koi argument contain nahi karta ho lekin aaisa koi function banaya hi nahi h hamne so it gives an error
