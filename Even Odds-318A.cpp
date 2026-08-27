#include<bits/stdc++.h>
using namespace std;
int main (){
    long long a,b;
cin >>a>>b;
    long long odds =(a+1)/2;
    if(b<=odds){
        cout<<(2*b-1)<<endl;
    } else {
        cout <<2*(b-odds)<< endl;
    }
    return 0;
}
