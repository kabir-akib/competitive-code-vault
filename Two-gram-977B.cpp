#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str;
    cin>>str;
    int mx=0;
    string ans="";
    for(int i=0; i<t-1; i++)
    {
        int c=0;
        for(int j=0;j<t-1;j++){
            if(str[i]==str[j] && str[i+1]==str[j+1]){
                c++;
            }
        }
        if(c>mx){
            ans="";
            ans+=str[i];
            ans+=str[i+1];
        }

    }
    cout<<ans<<endl;
}
