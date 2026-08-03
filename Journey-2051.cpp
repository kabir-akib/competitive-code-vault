#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,a,b,c,cnt;
    cin>>n>>a>>b>>c;
    int sum=a+b+c;
    if(sum<n){
        int x=(n/sum)*3;
        int rem=n%sum;
        if(rem==0){
            cnt=x;
        }
        else if(rem != 0 && rem<=a ){
               cnt=x+1;

        }
        else if(rem != 0 && rem<=b+a){
               cnt=x+2;

        }
        else if(rem != 0 && rem<=c+b+a){
               cnt=x+3;

        }
    }
    else{
        if(n<=a){
            cnt=1;
        }
        else if(n<=b+a){
            cnt=2;
        }
        else if(n<=c+b+a){
            cnt=3;
        }
    }
    cout<<cnt<<endl;
   }

}
