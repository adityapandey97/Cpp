
#include<iostream>
#include<vector>
using namespace std;
int peakMountainIndex(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }else {
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;

}
int main(){
    int arr[]={1,2,3,7,5,6};
    int n=6;
   int result= peakMountainIndex(arr,n);
   if(result==-1){
    cout<<"target was not found";
   }else{
    cout<<" missing elsement is:"<<result;
   }
}
