#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,ans="";
        cin>>s;
        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    ans+=s[i];
                    i=j;
                    break;
            }
        }
    }
    cout<<ans<<endl;
}
}
