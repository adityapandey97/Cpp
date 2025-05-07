
#include<iostream>
#include<vector>
using namespace std;
int lastoccurance(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=0;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start+=1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else if(arr[mid]>target){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;

}
int main(){
    int arr[]={10,20,30,30,30,40,50,60,70};
    int n=9;
    int target=30;
   int result= lastoccurance(arr,n,target);
   if(result==-1){
    cout<<"target was not found";
   }else{
    cout<<"the last occarance of target was found at indux:"<<result;
   }
}
