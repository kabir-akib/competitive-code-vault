#include<iostream>
using namespace std;
int main(){
    int t,a;
    cin>>t;
    int leg[t];
    for(int i=0;i<t;i++){
        cin>>a;

        if(a>=4 && a%4==0){
            leg[i]=a/4;
        }
        else if( a>=4 && a%4!=0){
            a-=2;
            leg[i]=(a/4)+1;

        }
        else if(a<4){
            leg[i]=a/2;
        }
    }
    for(int i=0;i<t;i++){
        cout<<leg[i]<<endl;
    }

}
