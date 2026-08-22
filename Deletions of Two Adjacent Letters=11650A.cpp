#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         string s,p;
    cin>>s>>p;
    int found=0;
    for (int i=0;i<s.size();i++){
    if(i==0 ||i%2==0){
            if(s[i]==p[0]){
        found=1;
        break;
    }
    }
}
if(found==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
    }
}
