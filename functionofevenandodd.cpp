#include<iostream>
using namespace std;
int evenvsodd(int n){
    if(n%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}
int main(){
    int n;
    cin>>n;
    evenvsodd(n);
}


