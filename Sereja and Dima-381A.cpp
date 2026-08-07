#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int s=0;
    int d=0;
    int left=0;
    int right=t-1;
    for(int i=0;i<t;i++){
        if(i%2==0){
        if (arr[left]>arr[right]){
            s+=arr[left];
            left++;
        }
        else{
            s+=arr[right];
            right--;
        }
        }
        else{
            if (arr[left]>arr[right]){
            d+=arr[left];
            left++;
        }
        else{
            d+=arr[right];
            right--;
        }
        }
    }
    cout<<s<<" "<<d;

}

