#include<iostream>
using namespace std;
int sum3digit(int n){
    for(int i=0;i<=n;i++){
        cout<<i;
    }
}
int main(){
  cout<<"enter a number until you need to count";
  int n;
  cin>>n;
  sum3digit(n);
}

