#include <iostream>
using namespace std;
int extreamp(int arr[] ,int n){
    int right=0;
    int left =n-1;
    while(left>=right){
    if(left==right){
        cout<<arr[right];
        break;
    }
        cout<<arr[right]<<" ";
        cout<<arr[left]<<" ";
        right++;
        left--;
    }    

}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    extreamp(arr,n);
}
