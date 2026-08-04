#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        int mx=0,mn=0,mid=0;
            cin>>a>>b>>c;

            if(a==b || a==c || b==c){
                cout<< 0 <<endl;
            }
            else if(a>b && a>c){
               mx=a;
               if(b>c){
                mn=c;
                mid=b;
               }
               else{
                mn=b;
                mid=c;
               }
               int ans1=mx-mid;
               int ans2=mid-mn;
               if(ans1>ans2){
                cout<<ans2<<endl;
               }
               else{
                cout<<ans1<<endl;
               }

            }
            else if(b>a && b>c){
               mx=b;
               if(a>c){
               mn=c;
               mid=a;
               }
               else{
                mn=a;
                mid=c;
               }
               int ans1=mx-mid;
               int ans2=mid-mn;
               if(ans1>ans2){
                cout<<ans2<<endl;
               }
               else{
                cout<<ans1<<endl;
               }
            }
            else if(c>a && c>b){
               mx=c;
               if(a>b){
               mn=b;
               mid=a;
               }
               else{
                mn=a;
                mid=b;
               }
                int ans1=mx-mid;
               int ans2=mid-mn;
               if(ans1>ans2){
                cout<<ans2<<endl;
               }
               else{
                cout<<ans1<<endl;
               }
            }


        }


    }

