#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      char a[3][3];
      int suma=0,sumb=0,sumc=0;
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if(a[i][j]=='A'){
                suma++;
            }
            else if(a[i][j]=='B'){
                sumb++;
            }
            else{
                sumc++;
            }
        }
      }
      if(suma!=3){
        cout<<"A"<<endl;
      }
      else if(sumb!=3){
        cout<<"B"<<endl;
      }
      else{
        cout<<"C"<<endl;
      }
    }
}
