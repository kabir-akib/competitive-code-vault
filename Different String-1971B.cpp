#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
            string a,b;
            cin>>a;
            b.resize(a.size());
            int found=0,pos=0;
            for(int i=0;i<a.size()-1;i++){
                if(a[i]!=a[i+1]){
                        pos=i;
                   found=1;
                   break;
                }
            }
        if(found==0){
            cout<<"NO";
        }
        else{
    for(int i=0;i<a.size();i++){

            b[i]=a[i];
    }
     b[pos]=a[pos+1];
            b[pos+1]=a[pos];
    cout<<"YES"<<endl;

    for(int i=0;i<a.size();i++){

        cout<<b[i];
    }
    }
    cout<<endl;
        }
    }
