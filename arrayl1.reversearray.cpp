#include<iostream>
using namespace std;
int revarr(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        if(arr[i]>arr[n-i-1]){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i];
    }
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    revarr(arr,n);
}
