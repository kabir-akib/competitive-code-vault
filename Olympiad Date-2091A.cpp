#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        int a0=3,b1=1,c3=1,d2=2,e5=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            }
        for(int i=0;i<n;i++){
            c++;
            if (arr[i]==0 && a0>0){

                a0--;
            }
            else if (arr[i]==1 && b1>0){

                b1--;
            }
            else if (arr[i]==3 && c3>0){

                c3--;
            }
            else if (arr[i]==2 && d2>0){

                d2--;
            }
            else if (arr[i]==5 && e5>0){

                e5--;
            }
            if(a0==0 && b1==0 && c3==0 && d2==0 && e5==0){
           break;
        }

        }
        if(a0!=0 || b1!=0 || c3!=0 ||d2!=0 ||e5!=0){
            cout<<0<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
}
