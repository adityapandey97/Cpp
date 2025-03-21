#include<iostream>
using namespace std;
int shiftby2(int arr[],int&n){
    int temp;
    int temp1=arr[n-2];
    temp=arr[n-1];
    for(int i=n-1;i>0;){
        arr[i]=arr[i-2];
        arr[i-1]=arr[i-3];
        i-=2;
    }
    arr[0]=temp1;
    arr[1]=temp;
}
int main(){
    int arr[]= {1,2,3,4,5,6};
    int n=6;
    shiftby2(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
