#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int t,x,n,a,b;
    cin>>t;
    int arr[t];
    int arrb[t];
    for(int i=0;i<t;i++){
        cin>>n;
        x=sqrt(n);
        if(x*x!=n){
            arr[i]=-1;

        }
        else{
            arr[i]=0;
            arrb[i]=x;

        }
    }
    for(int i=0;i<t;i++){
        if(arr[i]==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<arr[i]<<" "<<arrb[i]<<endl;
        }
    }


}
