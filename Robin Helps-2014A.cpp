#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,gold,cnt=0,ngold=0,zgold=0;
        cin>>n>>gold;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=gold && arr[i]>0){
                ngold+=arr[i];
            }
            else if(arr[i]==0){
                if(ngold>0){
                    cnt++;
                    ngold--;
                }

            }

        }
        cout<<cnt<<endl;


    }
}
