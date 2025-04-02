#include <iostream>
#include <vector>
using namespace std;
//sift by k times
int siftbyk(vector<int>&v,int k){
    int n=v.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int j=(i+k)%n;
        ans[j]=v[i];

    }
    v=ans;
}
int main(){
    vector<int> v={10,20,30,40,50,60};
    int k ;cin>>k;
    siftbyk(v,k);
    for(int i=0;i<(v.size());i++){
        cout<<v[i]<<endl;
    }
}
