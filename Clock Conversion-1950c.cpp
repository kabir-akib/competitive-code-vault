#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
           string s;
           cin>>s;
           string q="",tm="AM";
           q=q+s[0]+s[1];
           int x=stoi(q);
           if(x>=12){
            tm="PM";
           }
           if(x>12 ||x==0){
            x=abs(x-12);

           }
           if(x<10){
            cout<<"0"<<x<<":"<<s[3]<<s[4]<<" "<<tm<<endl;
           }
           else
            cout<<x<<":"<<s[3]<<s[4]<<" "<<tm<<endl;


    }
}
