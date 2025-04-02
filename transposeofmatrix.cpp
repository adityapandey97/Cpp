#include <iostream>
using namespace std;
int transpose(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
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
    transpose(arr,row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }
}
