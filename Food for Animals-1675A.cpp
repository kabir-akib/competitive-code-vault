#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a>=x){
             b=b+c;
        if(b>=y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
       else if(b>=y){
             a=a+c;
        if(a>=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        else{
            if(a<x){
                a=x-a;
            }
             if(b<y){
                    b=y-b;
            }
            long long mix=a+b;
            if(c>=mix){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
}
