#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        vector<long long> v = {a,b,c};
        sort(v.begin(), v.end());

        a = v[0];
        b = v[1];
        c = v[2];
        if(a==b && a==c){
            cout<<"YES"<<endl;
        }
        else if(b%a==0 && c%a==0 && (((b /a) - 1) + ((c / a) - 1) <= 3)){
                cout<<"YES"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }

    }
}
