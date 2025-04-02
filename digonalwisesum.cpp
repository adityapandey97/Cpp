#include <iostream>
using namespace std;
int digonalsum(int arr[4][4],int row,int col){
    int sum=0;
    for(int i=0;i<(row);i++){
        sum+=arr[i][i];
    }
    cout<<sum<<endl;

}
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,2,4,4},
        {1,2,3,5}
    };
    int row=4;
    int col=4;
    digonalsum(arr,row,col);
}
