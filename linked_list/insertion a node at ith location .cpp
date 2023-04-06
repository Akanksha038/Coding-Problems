// code for create a data in linkedlist and when you enter -1 , insertion in linked list stoped and after that if you want to insert data at any particular index then you use this code;
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
void insertnode(node*head,int i,int data){
    node*newNode=new node(data);
    int count=0;
    node*temp=head;
    while(count<i-1){
        temp=temp->next;
        count++;
        
    }
        node*a=temp->next;
        temp->next=newNode;
        newNode->next=a;
    }
        
        
    node*takeinput(){
        
        int data;
        cin>>data;
        node*head=NULL;
        while(data!=-1){
            node*newNode=new node(data);
            if(head==NULL){
                head=newNode;
            }
            else{
                //tab hamme traverse karna padta
                node*temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                    
                }
                temp->next=newNode;
                
            }
            cin>>data;
        }
        return head;
    }
    void print(node*head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }


int main() {
    node*head=takeinput();
    print(head);
   int data,i;
   cout<<endl;
   cout<<"write index & data on  which you wanted to inserted"<<endl;  
   cin>>i>>data;
   insertnode(head,i,data);
 print (head);
//   
//
    return 0;
}
//********************************output*************************************************
//2 54 89 6 3 98 2 5 9 3 3 6 5 2 -1
//2 54 89 6 3 98 2 5 9 3 3 6 5 2 
write index & data on  which you wanted to inserted
//5 5000
//2 54 89 6 3 5000 98 2 5 9 3 3 6 5 2 
