#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i =n;i>0;i--){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}
