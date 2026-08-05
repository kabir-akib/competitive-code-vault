#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
        int n;
        for(int i=0;i<t;i++){
            cin>>n;
            if(n<102){
                cout<<"NO"<<endl;
            }
             else if((n>=102 && n<=109)||(n>1009 && n<=1099)){
                cout<<"YES"<<endl;
            }
            else{
                 cout<<"NO"<<endl;
            }
        }
        return 0;
    }

