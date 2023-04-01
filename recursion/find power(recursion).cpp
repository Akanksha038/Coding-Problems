#include<iostream>
using namespace std;
int power(int x,int n){
    if(x==0){
        return 0;}
        if(n==0){
            return 1;
        }
        return x*power(x,n-1);
    
}
int main(){
    int n,x;
    cin>>x>>n;
    int ans=power(x,n);
    cout<<ans<<endl;
}
