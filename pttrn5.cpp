#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        //int value=i;
        while(j<i*2){
        cout<< j <<" ";
        j++;
        //value++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}