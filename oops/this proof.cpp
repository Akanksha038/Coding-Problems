#include <iostream>
using namespace std;
class student{
    public:
    int RN;
    int age;
    student(int rollNumber){
        cout<<"Address of this"<<this<<endl;
        RN=rollNumber;
        cout<<RN<<endl;
    }
};


int main()
{
    student s1(1001);
        
    
    cout<<"Address of 1001 rollnumber"<<& s1<<endl;

    return 0;
}
