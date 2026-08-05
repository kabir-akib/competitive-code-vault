#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x,y,z,w,a=0,b=0;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            a=arr[0];
            b=arr[n-1];

        }
        w=s-a;
        if(w<0){
            w=w*(-1);
        }
        x=w+(b-a);

        z=s-b;
        if(z<0){
            z=z*(-1);
        }
        y=z+(b-a);
if(x<y){
            cout<<x<<endl;
        }
        else {
            cout<<y<<endl;
        }
    }
}

