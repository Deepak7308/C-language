#include <iostream>
using namespace std;
int facto(int a){
    int fact=1;
    for(int i=a;i>1;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r,ans=1;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter r"<<endl;
    cin>>r;
    if(n>=r){
        ans=facto(n)/(facto(r)*facto(n-r));
        cout<<"answer= "<<ans<<endl;
    }
    else 
    cout<<"Inappropriate input";
    return 0;
    
}