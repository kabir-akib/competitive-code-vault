#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;;
        cin>>n;
        vector<long long >v(n);
        for (int i=0;i<n;i++){
            cin>>v[i];
        }
        for (int i=n-2;i>=0;i--){
            while(v[i]>=v[i+1] && v[i]>0){
                v[i]=v[i]/2;
                sum++;
            }
            if(v[i]>=v[i+1]){
                sum=-1;
                break;
            }
        }
        cout<<sum<<endl;
    }
}
