#include<iostream>
using namespace std;
int main(){
  for (int i =0;i<5;i++){
    for (int j=5;j>i;j--){
         cout<<"* ";
     }
      for(int k=1;k<=2*i+1;k++){
       cout<<"  ";
      }
      for(int j=5;j>i;j--){
        cout<<"* ";
      }
      cout<<endl;
  }
  for (int i =0;i<5;i++){
     for (int j=0;j<=i;j++){
         cout<<"* ";
     }
      for(int k=1;k<=2*5-2*i-1;k++){
        cout<<"  ";
      }
     for(int j=1;j<=i+1;j++){
        cout<<"* ";
      } 
      cout<<endl;
  }    
}
