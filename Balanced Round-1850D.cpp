#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long n,k,ans=1,mx=1;
        cin>>n>>k;
        vector<long long >v(n);
        for (int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for (int i=0;i<n-1;i++){
            if(v[i+1]-v[i]<=k){
                ans++;
                if(ans>mx){
                    mx=ans;
                }
            }
            else{
                ans=1;
            }
        }
        cout<<n-mx<<endl;
    }
}
