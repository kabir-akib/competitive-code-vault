#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,b=0,w=0;
        cin>>n;
        string s;
        cin>>s;
        int arr[n];
        for (int i=0;i<n;i++){
            if(s[i]=='B'){
                arr[b]=i;
                b++;
            }

        }

            cout<<(arr[b-1]-arr[0])+1<<endl;

    }
}
