#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=2;
    while(num<n){
        if(n%num==0){
        cout<<" no. is not prime";
        return 0;
        }
    num++;
    }
    cout<<"no. is prime";
    return 0;
}