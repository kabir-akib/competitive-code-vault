#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,found=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i=0;i<n;i++){
            if(a[i]!=b[i]){
                found=1;
                break;
            }
        }
        if(found==1){
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}
