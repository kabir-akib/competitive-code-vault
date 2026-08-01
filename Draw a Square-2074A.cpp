#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a==b && a==c && a==d){
            cout<<"Yes"<<endl;;
        }
        else{
            cout<< "No"<<endl;
        }
    }
}
