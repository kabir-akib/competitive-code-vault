#include<iostream>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    x = abs(arr[0]);
    for(int i=0; i<n; i++){
        if(abs(arr[i])<= x){
            x=abs(arr[i]);
        }
    }
    cout<<x<<endl;


}
