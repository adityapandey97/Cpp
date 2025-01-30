#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>=90){
        cout<<"a"<<endl;
    }
    else if(marks>=75){
        cout<<'b'<<endl;
    }
    else if(marks>=60){
        cout<<'c'<<endl;
    }
    else if(marks>=40){
        cout<<'d'<<endl;
    }
    else{
        cout<<"fail";
    }

}
