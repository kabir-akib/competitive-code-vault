#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int mx1=0,mx0=0,x=0;
    for(int i=0;i<s.size();i++){

            if(s[i]=='0'){
                x++;
                if(x>mx0){
                    mx0=x;
                }
                if(s[i+1]=='1'){
                    x=0;
                }

            }
            else{
                x++;
                if(x>mx1){
                    mx1=x;
                }
                if (s[i+1]=='0'){
                    x=0;
                }
            }
}
if(mx0>=7 ||mx1>=7){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
