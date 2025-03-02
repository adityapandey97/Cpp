#include<iostream>
using namespace std;
int main(){
    int b,c;
    char a;
    cout<<"enter the number";
    cin>>b>>c;
    cout<<"enter the opperater";
    cin>>a;
    switch (a)
    {
    case '+':
        cout<<"add of number";
        cout<<b+c;
        break;
    case '-':
        cout<<"sub a number";
        cout<<b-c;
        break;
    case '*':
        cout<<"mul a number";
        cout<<b*c;
        break;
    case '/':
        cout<<"divide a number" ;
        cout<< b/c;
        break;   
    default:
        break;
    }
}

