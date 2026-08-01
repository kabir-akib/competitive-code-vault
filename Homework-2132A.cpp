#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){

        cin>>a;
    char str1[a];
    for (int i=0;i<a;i++) {
    cin>>str1[i];
    }
    string s(str1, a);
    cin>>b;

    char str2[b];
char str3[b];

for(int i=0;i<b;i++)
    cin >> str2[i];

for(int i=0;i<b;i++)
    cin >> str3[i];

for(int i=0;i<b;i++){
    if(str3[i]=='V'){
        s = str2[i] + s;
    }
    else{
        s += str2[i];
    }
}

    cout<<s<<endl;
    }



}
