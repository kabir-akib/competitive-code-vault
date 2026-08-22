#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         string s;
    cin>>s;
    long long mn=-1,mx=0,cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' && mn==-1){
            mn=i;
        }
        if(s[i]=='1'){
            mx=i;
        }
    }

    for(int i=mn;i<mx;i++){
                 if(s[i]=='0'){
                    cnt++;
                 }
    }
    cout<<cnt<<endl;

    }
}
