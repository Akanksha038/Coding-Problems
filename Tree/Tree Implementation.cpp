/******************************************************************************

Best way to implementation of Tree

***************************************************************************/

#include <iostream>


using namespace std;
#include<vector>
template<typename T>


class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
        this->data=data;
    }
};

void PrintTree(TreeNode<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        PrintTree(root->children[i]);
    }
}
TreeNode<int>*takeInput(){
    int rootData;
    cout<<" Enter the rootData"<<endl;
    cin>>rootData;
    TreeNode<int>*root=new TreeNode<int>(rootData);
    int n;
    cout<<"Enter the number of childern of"<<rootData<<":"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>*child=takeInput();
        root->children.push_back(child);
    }
    return root;
}


int main()
{TreeNode<int>*root=takeInput();
PrintTree(root);
    
    // return 0;
}

//********************OUTPUT**********************
//Enter the rootData
//1
//Enter the number of childern of1:
//3
// Enter the rootData
//2
//Enter the number of childern of2:
//2
// Enter the rootData
//5
//Enter the number of childern of5:
//0
// Enter the rootData
//6
//Enter the number of childern of6:
//
//0
// Enter the rootData
//3
//Enter the number of childern of3:
//1
// Enter the rootData
//7
//Enter the number of childern of7:
//0
// Enter the rootData
//4
//Enter the number of childern of4:
//1
// Enter the rootData
//8
//Enter the number of childern of8:
//0
//1 : 2,3,4,
//2 : 5,6,
//5 : 
//6 : 
//3 : 7,
//7 : 
//4 : 8,
//8 : 

