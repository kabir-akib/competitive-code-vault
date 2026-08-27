#include<bits/stdc++.h>
using namespace std;
int main(){
    char LR;
    cin>>LR;
    string Key="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<Key.size();j++){
            if(LR=='R'){
                if(s[i]==Key[j]){
                    ans+=Key[j-1];
                }
            }
            else{
                if(s[i]==Key[j]){
                    ans+=Key[j+1];
                }
            }
        }
    }
    cout<<ans<<endl;

}
