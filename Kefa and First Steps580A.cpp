#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,sum=1,ans=1;
    cin>>n;
    vector<long long>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    for (int i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){
            sum++;
            if(sum>=ans){
                ans=sum;
            }
        }
        else{
            sum=1;
        }
    }
    cout<<ans<<endl;
}

