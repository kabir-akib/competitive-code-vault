#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
            int n,sum=0,even=0,odd=0;
            cin>>n;
            int arr[n];
            for (int i=0;i<n;i++){
                cin>>arr[i];
                sum+=arr[i];
                if(arr[i]%2==0){
                    even++;
                }
                else
                    odd++;
            }
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            else if (even==n ||odd==n){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }


    }
}
