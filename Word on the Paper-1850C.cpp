#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    char arr[8][8];

    while(t--){
            string s="";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];
                if(arr[i][j]!='.'){
                    s+=arr[i][j];
                }
            }
        }
        cout<<s;
        cout<<endl;
    }
}
