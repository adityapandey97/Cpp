#include <iostream>
#include <vector>
using namespace std;
int missingoneout(vector<int>&v){
    int n=v.size();
    int sum=0;
    int sumofdigit=0;
    for(int i=0;i<=n+1;i++){
         sum+=i;
    }
    for(int i=0;i<n;i++){
        sumofdigit+=v[i];
    }
    cout<<sum-sumofdigit; 

}
int main(){
    vector<int>v={3,4,5,8,7,1,2};
    missingoneout(v);
}
