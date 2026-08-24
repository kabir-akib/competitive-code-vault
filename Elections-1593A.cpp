#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,mx;
        cin>>a>>b>>c;
        mx=max({a,b,c});
        if(a==b &&a==c){
            a++;
            b++;
            c++;
        }
        else{
            if(a==mx){

                    if(b<a){
                b=a-b+1;}
                if(c<a){
                c=a-c+1;}
                a=0;
            }

            else if (b==mx){

                    if(a<b){
                a=b-a+1;}
                if(c<b){

                c=b-c+1;}
                b=0;
            }

            else if(c==mx){

                    if(a<c){
                a=c-a+1;}
                if(b<c){
                b=c-b+1;}
                c=0;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}


