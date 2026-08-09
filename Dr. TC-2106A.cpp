#include <iostream>
#include<String>

using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--){
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                s.replace(i,1,"1");
                for(int i=0;i<n;i++){
                    if(s[i]=='1'){
                        cnt++;
                    }
                }
                s.replace(i,1,"0");
            }
            else{
                s.replace(i,1,"0");
                for(int i=0;i<n;i++){
                    if(s[i]=='1'){
                        cnt++;
            }

        }
        s.replace(i,1,"1");
            }
        }
        cout<<cnt<<endl;




    }
}


