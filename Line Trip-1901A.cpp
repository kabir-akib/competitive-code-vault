#include<iostream>
using namespace std;
int main(){
    int t,n,x,v;
    cin>>t;
    int ans[t];

    for(int i=0;i<t;i++){
        cin>>n>>x;
        int a[n];
        int maxi=0;
        int high = 0;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
            v=2*(x -a[n-1]);
        for(int j=0;j<n-1;j++){
            if(maxi<=(a[j+1]-a[j])){
                high=(a[j+1]-a[j]);
                maxi=high;
                }
            else if(maxi>(a[j+1]-a[j])){
                    high=maxi;
                }
            }


        if(v>=high){
                ans[i]=v;
            }
            else{
                ans[i] =high;
            }

    }
    for(int i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }

}
