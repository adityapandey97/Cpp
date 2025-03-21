#include<iostream>
using namespace std;
int printallpair(int arr[],int&n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    printallpair(arr,n);
}
