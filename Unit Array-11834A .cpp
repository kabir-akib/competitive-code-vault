#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,pos=0,neg=0;
        cin>>n;
        for(int i=0;i <n; i++){
            int x;
            cin>>x;

            if(x==-1)
                neg++;
            else
                pos++;
        }
        int cnt=0;

        while(neg>pos){
            neg--;
            pos++;
            cnt++;
        }
        if(neg% 2!=0){
            cnt++;
        }

        cout<<cnt<<endl;
    }
}
