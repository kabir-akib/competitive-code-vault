#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x=-1,found=0;
        cin>>n>>k;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1 && x==-1){
                x=i;
        }
        }
    if((x+k)<n){
       for (int i=x+k;i<n;i++){
        if(arr[i]==1){
            found=1;
            break;
        }

        }
        if(found==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
        else if((x+k)>=n){
            cout<<"YES"<<endl;
        }
    }
}
