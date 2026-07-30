#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>=1 && a<=100){
    int arr[a][3];
    for(int i=0;i<a;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    int sumx=0,sumy=0,sumz=0;
    for(int i=0;i<a;i++){
            sumx=sumx+arr[i][0];
            sumy=sumy+arr[i][1];
            sumz=sumz+arr[i][2];

    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";
    }
    else
        cout<<"NO";
}
}
