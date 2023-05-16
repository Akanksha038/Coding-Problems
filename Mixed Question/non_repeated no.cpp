#include <iostream>

using namespace std;

int main()
{
    int array[9]={1,2,3,4,5,1,2,3,4};
    int result=0;
    for(int i=0;i<9;i++){
        result=array[i]^result;
    }
    cout<<result;
    
   

    return 0;
}

// output:
// 5
