#include<iostream>
using namespace std;
int arrange0and1(int arr[],int&n){
    int zerocount=0;
    int onecount=1;
    for(int i=0;i<n;i++){
       if(arr[i]==0)
        zerocount++;
       else
        onecount++;
    }
    int i=0;
    for(i=0;i<zerocount;i++){
        arr[i]=0;
    }
    for(;i<n;i++){
        arr[i]=1;
    }
}
int main(){
    int arr[]={1,0,1,0,1,1,0,0,0,0,1};
    int n=11;
    arrange0and1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
