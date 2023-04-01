/******************************************************************************
Implementation of stack using array

*******************************************************************************/
#include <iostream>

using namespace std;
class Stack_using_Array{
    private:
    int *array;
    int next_index; // it is equal to top
    int capacity;// ye array ke size ko hold karge;
    
    public:
    Stack_using_Array(int total_size){
        array=new int[total_size];
        next_index=0;
        capacity=total_size;
    }
    
    // it tells no. of elements present in stack 
    int size(){
        return next_index;
    }
    
    bool isEmpty(){
    //     if(next_index==0){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
        
        //  or
        return next_index==0;
    }
    
    void push(int element)
        {
                //check kahi stack is full?
                if(next_index==capacity)
                {                      //4==4
                        cout<<"Stack is full"<<endl;
                        return;
                }
                else
                {
                        array[next_index]=element;
                        next_index++;
                }
        }
    
    //delete an element 
    int pop()
    {
        // if(isEmpty()==true)
        
        if(isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return true;
        }
        else
        {
            next_index--;
            return array[next_index];
        }
    }
    
    //showing top most element
    int top(){
        
        // if(isEmpty()==true)
        
        if(isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return true;
        }
        return array[next_index-1];
    }
};

int main()
{
    Stack_using_Array array(4);
    array.push(10);
    array.push(20);
    array.push(30);
    array.push(40);
    array.push(50);
    cout<<"topmost element of stack:";
    cout<<array.top()<<endl;
    cout<<"1st poped element of stack :";
     cout<<array.pop()<<endl;
     cout<<"2nd poped element of stack :";
      cout<<array.pop()<<endl;
      cout<<"3rd poped element of stack :";
       cout<<array.pop()<<endl;
       cout<<"no. of element present in stack :";
       cout<<array.size()<<endl;
       cout<<"Checked stack is empty or not:";
       cout<<array.isEmpty()<<endl;
    
    

    // return 0;
}


//output of this program is::

//Stack is full
//topmost element of stack:40
//1st poped element of stack :40
//2nd poped element of stack :30
//3rd poped element of stack :20
//no. of element present in stack :1
//Checked stack is empty or not:0
