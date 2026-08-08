#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--){
        int a,k,flag,x=0,found=0;
        cin>>a>>k;
        int arr[a];
        for (int i=1;i<=a;i++){
            cin>>arr[i];
        }

        for (int i=1;i<=a;i++){
        flag=1;
            for(int j=1;j<=a;j++){
                if ( i!=j && (abs(arr[i]-arr[j]))%k==0){
                    flag=0;
                    break;
                }

            }
            if(flag==1){
                x=i;
                found=1;
                break;

            }
        }
        if(found==1){
            cout<<"Yes"<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

 }
