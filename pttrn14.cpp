#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=(2*n-1)){
            if(j<=(n-i))
            cout<<" ";
            else 
            cout<<"*";
            j++;
            cout<<" ";
        }
        int start=i-1;
        while(start){
            cout<<"*";
            start--;
            cout<<" ";
        }
        i++;
        cout<<endl;
    }
    return 0;
}