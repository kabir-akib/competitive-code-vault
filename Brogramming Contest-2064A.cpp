#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        if (s[0]=='1'){
            sum++;
        }
        for (int i=1;i<n;i++){
            if(s[i]!= s[i-1]){
                sum++;
            }
        }
            cout<<sum<<endl;


    }


}
