/******************************************************************************
 * Implementation of Queue Using Array

*******************************************************************************/
#include <iostream>
using namespace std;
template<typename T>
class QueueUsingArray
{
   T *data;
    int first_Index;
    int next_Index;
    int capacity;
    int size;
    
    public:
    
    QueueUsingArray(T s)
    {
         data=new T[s];
         first_Index=-1;
         next_Index=0;
         capacity=s;
         size=0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    void enqueue(T element){
        if(size==capacity){
            cout<<"Queue is Full!!"<<endl;
            return;
        }
        data[next_Index]=element;
        next_Index=(next_Index+1)%capacity;
        if(first_Index==-1)
        {
            first_Index=0;
        }
        size++;
    }
    T front()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty!!"<<endl;
            return 0;
        }
        return data[first_Index];
        
    }
    T dequeue()
    {
         if(isEmpty())
        {
            cout<<"Queue is Empty!!"<<endl;
            return 0;
        }
        T ans=data[first_Index];
        first_Index=(first_Index+1)%capacity;
        size--;
        if(size==0){
            first_Index=-1;
            next_Index=0;
        }
        return ans;
    }
    
    
};

int main()
{
    QueueUsingArray<int>q(5);
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.enqueue(400);
    q.enqueue(500);
    q.enqueue(600);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    

    return 0;
}

// Output=====>
// Queue is Full!!
// 100
// 100
// 200
// 300
// 2
// 0
