#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for (int i=0;i<n;i++){
        ans=ans^arr[i];  
    }
    return ans;
}
int main(){
    int arr[12]={2,2,4,5,6,4,8,6,5};
    int n=12;
    int answ= unique(arr,n);
    cout<< answ;
}
