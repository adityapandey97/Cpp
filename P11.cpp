#include<iostream>
using namespace std;
int main(){
 for (int i =0;i<5;i++){
    for (int j=4;j>i;j--){
         cout<<" ";
     }
      for(int k=1;k<=i+1;k++){
          cout<<"* ";
      }
      cout<<endl;
  }
  for (int i =0;i<5;i++){
     for (int j=1;j<=i;j++){
         cout<<" ";
     }
      for(int k=5;k>i;k--){
          cout<<"* ";
      }
      cout<<endl;
  }
}
