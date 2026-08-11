#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if (a%2 ==0 || a%b==0){
            cout<<"YES"<<endl;
        }
        else if((a-2)%b==0 ||(a-b)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
