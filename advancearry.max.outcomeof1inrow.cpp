#include <iostream>
#include <vector>
using namespace std;
int maxCount1InRow(int v[][4],int n){
    int max=INT8_MIN;
for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){
        if(v[i][j]==1){
            count++;
        }
    }
    if(max<count){
        max=count;
    }
}
cout<<max;
}
int main(){
    int v[][4]={{1,0,1,0},
               {1,1,1,1},
               {1,0,0,0},
               {0,1,0,1}
    };
    int n=4;
    maxCount1InRow(v,n);
}            
