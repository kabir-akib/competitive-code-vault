#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int rem=c%a;
        if(rem>=b){
            c=c-(rem-b);
        }
        else{
            c=c-(rem+a-b);
        }
        cout<<c<<endl;
    }
}
