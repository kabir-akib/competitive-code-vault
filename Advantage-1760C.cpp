#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
    long long mx = *max_element(v.begin(), v.end());
        long long x=0,cnt=0;
       for(int i=0;i<n;i++){
            if(v[i]>x && v[i]<mx){
                x=v[i];
            }
            else if(v[i]==mx){
                cnt++;
            }
        }
        if(x==0){
            x=mx;
        }
        if(cnt>1){
            x=mx;
        }
         vector<long long>arr(n);
        for(int i=0;i<n;i++){
            if(v[i]==mx ){
                arr[i]=mx-x;
            }
            else{
                arr[i]=v[i]-mx;
            }
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;



    }
}
