#include<bits/stdc++.h>
using namespace std;
int main (){
    int test;
    cin>>test;
    while(test --){

    int t;
    cin>>t;
    if(t==1){
        cout<<1<<endl;
    }
    else if(t%2!=0){
        cout<<(t/2 )+1<<endl;
    }
    else{
        cout<<t/2<<endl;
    }
    }

}
