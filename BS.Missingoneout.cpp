
#include<iostream>
#include<vector>
using namespace std;
int missingoneout(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=0;
    while(start<=end){
        int diff=arr[mid]-mid;
        if(diff==1){
            start=mid+1;
        }else {
            ans=mid;
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans+1;

}
int main(){
    int arr[]={1,2,4,5,6,7};
    int n=6;
   int result= missingoneout(arr,n);
   if(result==-1){
    cout<<"target was not found";
   }else{
    cout<<" missing elsement is:"<<result;
   }
}
