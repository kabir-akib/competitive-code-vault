#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str1,str2,str3;
            string ans[t];
    for(int i=0;i<t;i++){
        ans[i]="";
        cin>>str1>>str2>>str3;

        if(str1.size()<=10 && str2.size()<=10 && str3.size()<=10){
        ans[i]+=str1[0];
        ans[i]+=str2[0];
        ans[i]+=str3[0];

        }


    }

for(int i=0;i<t;i++){
    cout<<ans[i]<<endl;
}

}
