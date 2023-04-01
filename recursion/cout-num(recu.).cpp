#include<iostream>
using namespace std;

int number(int n){
   int count= 0;
   if(n<10){
       return 1;
   }
return 1+number(n/10);

}
int main(){
    int n;
    cin>>n;
   int ans= number(n);
   cout<<ans;
    
}

