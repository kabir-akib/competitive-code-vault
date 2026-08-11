#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b,c,n;
        cin>>a>>b>>c>>n;
        if (a==b && a==c && n%3==0){
            cout<<"YES"<<endl;
        }
        else if(a>=b && a>=c){
            if((a-b)+(a-c)<=n && (n-(a-b+a-c))%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
            else if(b>=a && b>=c ){
            if((b-a)+(b-c)<=n && (n-(b-a+b-c))%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            }
            else if(c>=b && c>=a){
            if((c-b)+(c-a)<=n && (n-(c-b+c-a))%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }


    }
}
