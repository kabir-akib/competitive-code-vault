#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0,mx=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

            if(v[i]==0){
                cnt+=1;
                if(cnt>=mx){
                    mx=cnt;
                }
                }

            else if(v[i]==1){
                cnt=0;

                }
            }
            cout<<mx<<endl;

    }
}
