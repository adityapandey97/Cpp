#include<iostream>
using namespace std;
int shiftby1(int arr[],int&n){
    int temp;
    temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main(){
    int arr[]= {1,2,3,4,5,6};
    int n=6;
    shiftby1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
