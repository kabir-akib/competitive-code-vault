#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,ans1,ans2;
        cin>>a>>b>>c;
        if(a%2==0){
            ans1=(a/2)*c;
        }

        else if(a%2!=0){
            ans1=(a/2)*c+b;
        }

    ans2=a*b;


    if( ans1>ans2){
        cout <<ans2<<endl;
        }
    else{
        cout <<ans1<<endl;
    }
    }




}
