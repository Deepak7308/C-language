#include <iostream>
using namespace std;
int sumofarray(int arr[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[50];
    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Sum of elements in array is:  "<<sumofarray(arr, size)<<endl;
    
    
}