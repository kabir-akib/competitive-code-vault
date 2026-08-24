#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,ans=0;
        cin>>n;
        vector<long long >arr(n);
        vector<long long >barr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>barr[i];
        }
        long long m=*min_element(arr.begin(),arr.end());
        long long m2=*min_element(barr.begin(),barr.end());

        for(int i = 0; i < n; i++){
            ans += max(arr[i] - m, barr[i] - m2);
        }

        cout<<ans<<endl;
    }
}
