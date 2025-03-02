#include<iostream>
using namespace std;
float area(int r){
    return (3.14)*r*r;
}
int main(){
    int n;
    cin>>n;
    cout<<area(n);
}
