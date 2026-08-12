#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,a,b;
        cin >>n>>a>>b;
        int alice=min(a - 1,n - a);
        int bob = min(b - 1,n - b);
        if (bob<alice)
            cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
    }
    }
}
