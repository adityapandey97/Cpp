#include<iostream>
using namespace std;
int digitN(int n){
    int x=0;
    while(n>0){
        int r=n%10;
        x=x*10+r;
        n=n/10; 
    }
while(x>0){
    int r=x%10;
    cout<<r<<",";
    x=x/10;
}
}
int main(){
    int n;
    cin>>n;
    digitN(n); 
}
