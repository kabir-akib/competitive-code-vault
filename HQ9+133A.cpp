#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    int found=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' ||s[i]=='9'){
           found=1;
        }
    }
    if(found==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
