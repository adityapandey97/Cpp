#include<iostream>
using namespace std;
int temp(int n){
     float r=((n-32)*(5.0/9.0));
     return r;
}
int main(){
    cout<<"enter temp in fahrenheit";
    int n;
    cin>>n;
    cout<< temp(n);
}
