/******************************************************************************
Implementation of queue by without any ristrictions of size.
*******************************************************************************/
#include <iostream>


using namespace std;
template<typename T>
class QueueUsingArray
{
    T *data;
    int NI;
    int FI;
    int capacity;
    int size;
    public:
    QueueUsingArray(int s)
    {
        data=new T[s];
        NI=0;
        FI=-1;
        capacity =s;
        size=0;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    
    //insert
    void enqueue(T element)
    {
        if(size==capacity)
        {
           T *newdata=new T[2*capacity];
           int j=0;
          for(int i=FI;i<capacity;i++)
          {
           newdata[j]=data[i];
           j++;
          }
          
          for(int i=0;i<FI;i++)
          {
              newdata[j]=data[i];
              j++;
          }
          
          delete[]data;
          data=newdata;
          FI=0;
          NI=capacity;
          capacity=capacity*2;
          
        } 
        data[NI]=element;
        NI=(NI+1)%capacity;
        if(FI==-1){
            FI=0;
    }
        size++;
    }
    
    T front()
    {
        if(isEmpty()){
            cout<<"Empty Queue"<<endl;
            return 0;
        }
        return data[FI];
    }
    
    T dequeue(){
        if(isEmpty()){
            cout<<"Empty Queue"<<endl;
            return 0;
        }
        T ans=data[FI];
        FI=(FI+1)%capacity;
        size--;
        if(size==0){
            FI=-1;
            NI=0;
        }
        return ans;
        }
        
        
        
    };





int main()
{
     QueueUsingArray<int>q(5);
     q.enqueue(1000);
     q.enqueue(2000);
     q.enqueue(3000);
     q.enqueue(4000);
     q.enqueue(5000);
     q.enqueue(6000);
     q.enqueue(7000);
     q.enqueue(8000);
     q.enqueue(9000);
     q.enqueue(1000);
     q.enqueue(1100);
     q.enqueue(1200);
     q.enqueue(1300);
     
     cout<<q.front()<<endl;//1000
     cout<<q.dequeue()<<endl;//1000
     cout<<q.dequeue()<<endl;//2000
     cout<<q.getsize()<<endl;//11
     cout<<q.isEmpty()<<endl;//0

    return 0;
}
