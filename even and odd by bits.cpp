#include<iostream>
using namespace std;
int evenByBits(int n){
   if(n&1==1){
    cout<<"odd";
   }else{
    cout<<"even";
   }
}
int main(){
    int n;
    cin>>n;
    evenByBits(n);
}
