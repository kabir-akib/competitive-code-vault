#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int x,a=0,b=0;
        string s;
        cin >> s;
        x=s.size();
        for (int i=0;i<x;i++){
                if(s[i]=='1'){
                    a++;
                }
                else if(s[i]=='0') {
                    b++;
                }
        }
         int mn=min(a, b);

        if (mn % 2 == 1)
            cout <<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }


    }

