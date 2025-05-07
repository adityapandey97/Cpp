binary search;
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            start=mid+1;
        }else if(arr[mid]>target){
            start=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=9;
    int target=70;
   int result= binarysearch(arr,n,target);
   if(result==-1){
    cout<<"target was not found";
   }else{
    cout<<"target was found at indux:"<<result;
   }
}
