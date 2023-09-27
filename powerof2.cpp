#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    bool s=0;
    cin>>n;
    for(int i=0; i<=30; i++){
        if (n==(pow(2,i))){
        s=1;
        }
    }
    if(s==1)
    cout<<"true";
    else 
    cout<<"false";
}