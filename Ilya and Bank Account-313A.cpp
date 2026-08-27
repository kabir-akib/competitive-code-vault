#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    if(s[0]!='-'){
        cout<<s<<endl;
        return 0;
    }
    else{
            string a=s;
    string b=s;
        a.erase(a.size()-1,1);
        b.erase(b.size()-2,1);
        long long x,y;
        x=stoi(a);
        y=stoi(b);
        if(x>y){
            cout<<x<<endl;
        }
        else{
            cout<<y<<endl;
        }

    }
}
