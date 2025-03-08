#include<iostream>
using namespace std;
int minimumvalue(int arr[],int n){
    int min=INT_FAST8_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min = arr[i];
        }else{
            continue;
        }
    }
    return min;

}
int main(){
    int arr[5]={1,2,8,9,4};
    int a = minimumvalue(arr,5);
    cout<< a;
    

}
