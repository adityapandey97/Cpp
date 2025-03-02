#include<iostream>
using namespace std;
void isprime(int n){
    if(n>=2){
        int i=2;
        while(i<=n){
            if(i==n){
                cout<<"prime";
                return;
            }
            if(n%i==0){
                cout<<"not prime";
                return;
            }else{
                i++;
                continue;
            }
           
        }

    }else{
        cout<<"not prime";
        return;
    }

}
int main(){
    int n;
    cin>>n;
    isprime(n);
}
