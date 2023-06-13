//prohram to insert and print key and values
#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    unordered_map<string,int>mapping;
    // way to insert element
    pair<string,int>s("akanksha",1);
    mapping.insert(s);
    // other way to insert element in hashmap
    mapping["shaurya"]=5;
    // print value of hashmap
    cout<<mapping["shaurya"]<<endl;
    cout<<mapping.at("akanksha")<<endl;
    // if any key doesnot exixt then by using at doesnot give error but if you excess those key which doesn't exixt by using only square bracket then it give error 
    cout<<mapping["shaur"]<<endl;
    cout<<mapping.at("akank")<<endl;
    return 0;
}
