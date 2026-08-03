#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int low=a;
        while(a>0){
        int x=a%10;
        if(x<low){
            low=x;
        }
        a=a/10;

        }
        cout<<low<<endl;
    }
}
