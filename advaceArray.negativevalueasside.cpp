#include <iostream>
#include <vector>
using namespace std;
int negativeasside(int arr[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[k]);
            k++;
        }
         
    }
    
}
int main(){
    int arr[]={1,-3,-5,8,9,-4};
    int n=6;
    negativeasside(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
