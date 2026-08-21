#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    string s,ans="";
    cin>>n;
    cin>>s;

      for(int i = 0, jump = 1; i < n; i += jump){
        ans += s[i];
        jump++;
    }
    cout<<ans<<endl;
}

