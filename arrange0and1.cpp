#include<iostream>
using namespace std;
int arrange0and1(int arr[],int&n){
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        } 
        else{
            continue;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[]={1,0,1,0,1,1,0,0,0,0,1};
    int n=11;
    arrange0and1(arr,n);

}
