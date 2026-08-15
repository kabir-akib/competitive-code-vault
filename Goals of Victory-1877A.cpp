#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n,pos=0,neg=0,total=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            if(arr[i]>0){
                pos++;
                total+=arr[i];
            }
            else{
                neg++;
                total+=arr[i];
            }
        }
        cout<<total*(-1)<<endl;
     }

}
