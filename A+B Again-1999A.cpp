#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,rem=0,sum=0;
        cin >>a;
        rem=a%10;
        a=a/10;
        sum=rem+a;
        cout<<sum<<endl;
    }
}
