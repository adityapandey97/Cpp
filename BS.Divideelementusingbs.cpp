
advance problem;
#include<iostream>
#include<vector>
using namespace std;
int getquotient(int a,int b){
int s=0;
int e=a;
int ans=-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(mid*b==a){
        return mid;
    }else if(mid*b<a){
        ans = mid;
        s=mid+1;
    }else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
int main(){
    int a,b;
    cout<<"enter the divident and divisor :";
    cin>>a>>b;
    int ans=getquotient(abs(a),abs(b));
    if(a<0&&b>0||a>0&&b<0){
        ans=0-ans;
    }
    cout<<ans;
}
