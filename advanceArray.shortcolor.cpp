#include <iostream>
#include <vector>
using namespace std;
int shortcolor(int arr[],int n){
    int k=0;
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==0){
            swap(arr[i],arr[k]);
            k++;
            i++;
        }else if(arr[i]==2){
            swap(arr[i],arr[j]);
            j--;
            // there is no need to i++ because 
            //we dont know that ki jo elsement swap hoke iss location pe aya hai vo shorted hai ki nahi
        }else{
            i++;
        }
    }
}
int main(){
    int arr[6]={1,0,2,2,0,1};
    int n=6;
    shortcolor(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
