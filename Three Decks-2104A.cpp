#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%3!=0){
            cout<<"NO"<<endl;
        }
        else if ((a+b+c)%3==0){
            int x=(a+b +c)/3;
            int y=x-a;
            int z=x-b;
            if(b>x){
                 cout<<"NO"<<endl;
            }
            else if(c-(y+z)==x){
                cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }
        }

    }
}
