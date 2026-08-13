#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
           string s;
           cin>>s;
           int a=0,x=0,ans=0;
           int arr[5];
           int sz=s.size();
           for(int i=sz-1;i>=0;i--){
                a=s[i]-'0';
                if(a!=0){

                    int base=sz-1-i;
                    int power=pow(10,base);
                    ans=a*power;
                    arr[x]=ans;
                    x++;
                }

           }
           cout<<x<<endl;
           for(int i=x-1;i>=0;i--){
            cout<<arr[i]<<" ";
           }
           cout<<endl;


       }

}
