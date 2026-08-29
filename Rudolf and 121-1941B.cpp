#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int found=0;
        for(int i=0;i<n-2;i++){
            if(v[i]<0){
                found=1;
                break;
            }
           long long x=v[i];
            v[i]=0;
            v[i+1]-=2*x;
            v[i+2]-=x;
        }
        for(int i=0;i<n;i++){
            if(v[i]!=0){
                found=1;
                break;
            }
        }
        if(found==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
