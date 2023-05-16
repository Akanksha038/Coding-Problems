Identify  two distinct element in given doubly element array
#include <iostream>

using namespace std;

int main()
{
    int array[10]={1,2,3,4,59,9,1,2,3,4};
    int result=0;
    for(int i=0;i<10;i++){
        result=array[i]^result;
    }
    result=result & ~(result-1);
    int set1=0,set2=0;
    for(int i=0;i<10;i++){
        if(result &array[i]){
            set1^=array[i];
            
        }
        else set2^=array[i];
    }

    cout<<set1<<" ";
    cout<<set2;
    return 0;
}

// output==>
// 59 9
