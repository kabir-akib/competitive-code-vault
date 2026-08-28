#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long a,b=0,c=0,found=0;
        cin>>a;
        if(a<4 || a%2!=0){
            cout<<-1<<endl;
        }
        else{
            c=(a+5)/6;
            b=a/4;
            cout<<c<<" "<<b<<endl;
        }
    }
}

