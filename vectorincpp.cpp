#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    for(auto it:v){
        cout<<it<<" ";
    }

}
