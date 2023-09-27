#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    cout<<"Which opertaions do you want to perform??\n1.AND\n2.OR\n3.NOT\n4.XOR\n";
    cin>>n;
    if(n==1)
    cout<<" a&b= "<<(a&b)<<endl;
    else if(n==2)
    cout<<" a|b= "<<(a|b)<<endl;
    else if(n==3)
    cout<<"~a= "<<(~a)<<" ~b= "<<(~b);
    else if(n==4)
    cout<<" a^b= "<<(a^b)<<endl; 
    /*cout<<" a&b= "<<(a&b)<<endl;
    cout<<" a|b= "<<(a|b)<<endl;
    cout<<" ~a "<<(~a)<<endl;
    cout<<" a^b= "<<(a^b)<<endl; */
    
}