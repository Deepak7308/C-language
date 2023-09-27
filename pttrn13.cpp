#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            
            if(j<=(n-i))
            cout<<" ";
            //break;
            else{
            cout<<count;
            count++;
            }
            j++;
            cout<<" ";
        }
        i++;
        //count++;
        cout<<endl;
    }
    return 0;
}