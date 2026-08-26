#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int sz;
    cin>>sz;
        string s;
        cin>>s;

        for(int i=0;i<s.size();i++){
            if(i<s.size()/2 && (s[i]=='0' && s[s.size()-i-1]=='1') ||(s[i]=='1' && s[s.size()-i-1]=='0')){
                sz-=2;

            }
            else{
                break;
            }
        }
        if(sz<0){
            sz=0;
        }
        cout<<sz<<endl;

    }
}

