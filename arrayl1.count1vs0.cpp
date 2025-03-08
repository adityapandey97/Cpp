#include<iostream>
using namespace std;
int count0vs1(int arr[],int n){
    int zerocount =0;
    int onecount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            onecount++;
        }
        if(arr[i]==0){
            zerocount++;

        }
    }
    cout<<zerocount<<endl;
    cout<<onecount;
}

int main(){
    int arr[16]={1,0,0,0,4,1,1,0,0,1,1,1,1,5,3,6};
    int n=16;
    count0vs1(arr,n);
    
}
