#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
            string a,b;
            cin>>a;
            b=a;
            reverse(b.begin(),b.end());
            for(int i=0;i<b.size();i++){
                if(b[i]=='p'){
                    b[i]='q';
                }
                else if(b[i]=='q'){
                    b[i]='p';
                }
            }
            cout<<b<<endl;
    }

}
