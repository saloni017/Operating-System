#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        } 
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//time complexity is o(n*n)
//space complexity is o(n)