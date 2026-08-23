#include<bits/stdc++.h>
using namespace std;
int main(){
            long long n,zero=0,one=0;
            cin>>n;
            string arr;
            cin>>arr;
            for (int i=0;i<n;i++){
                if(arr[i]=='1'){
                    one++;
                }
                else
                    zero++;
            }
            long long ans=abs(one-zero);
            cout<<ans<<endl;
}
