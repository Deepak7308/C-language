#include <iostream>
using namespace std;
int count1(int a){
    int count=0;
    while(a!=0){
        int bit=a&1;
        if(bit){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int main(){
    int a ,b;
    cin>>a>>b;
    int bits=count1(a)+count1(b);
    cout<<bits;
}