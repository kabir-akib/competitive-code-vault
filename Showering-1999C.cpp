#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long s,n,m;
        int flag=0;
        cin>>s>>n>>m;
        int arr[s][2];
        for(int i=0;i<s;i++){
                    cin>>arr[i][0]>>arr[i][1];
        }
        for(int i=0;i<s;i++){
                    if(arr[0][0]>=n){
                        flag =1;
                        break;
                    }
                    else if(i>0 && arr[i][0]-arr[i-1][1]>=n){
                        flag=1;
                        break;
                    }
                    else if(i==s-1 && m-arr[i][1]>=n){
                        flag=1;
                        break;
                    }
                }

        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
