#include<iostream>
#include<vector>
using namespace std;
int firstoddoccrence(int arr[],int n){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(s==e){
        return s;
    }
    if(mid&1){
        if(mid>0&&arr[mid-1]==arr[mid]){
            s=mid+1;  
        }else{
            e=mid-1;
        }
    }else{
        if(mid<n&&arr[mid]==arr[mid+1]){
            s=mid+2;
        }else{
            e=mid;
        }
    }
    mid=s+(e-s)/2;
}
}
int main(){
    int arr[]={1,1,2,2,3,3,4,4,5,5,3,6,6,7,7};
   int n=15;
   int ans=firstoddoccrence(arr,n);
   cout<< ans;
}
