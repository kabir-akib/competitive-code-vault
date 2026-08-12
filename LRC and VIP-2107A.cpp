#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mn=*min_element(v.begin(),v.end());
        int mx =*max_element(v.begin(),v.end());
        if (mx==mn){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for (int i=0;i<n;i++){
                if(v[i]==mx){
                    cout<<2<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
