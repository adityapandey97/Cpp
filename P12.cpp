#include<iostream>
using namespace std;
int main(){
 for (int i =0;i<5;i++){
    for (int j=4;j>i;j--){
         cout<<" ";
     }
      for(int k=1;k<=i+1;k++){
        if(k==1||k==i+1){
          cout<<"* ";
        }
        else{
        cout<<"  ";
        }
      }
      cout<<endl;
  }
  for (int i =0;i<5;i++){
     for (int j=1;j<=i;j++){
         cout<<" ";
     }
      for(int k=5;k>i;k--){
          if(k==5||k==i+1){
          cout<<"* ";
        }
        else{
        cout<<"  ";
        }
      }
      cout<<endl;
  } 
}   
