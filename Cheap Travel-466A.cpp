#include<iostream>
using namespace std;
int main(){
    int n,m,a,b,x=0,y=0,z=0,z1=0;
    cin>>n>>m>>a>>b;
    x=n*a;

    if(n%m==0){
        y=(n/m)*b;
    }
    else{
        z=(n/m)*b+(n-((n/m)*m))*a;
        z1=((n/m)+1)*b;
    }
    if (y==0){
        y=x;
    }
    if(z==0){
        z=x;
    }
    if(z1==0){
        z1=x;
    }
    cout<<x<< " "<<y<<" "<<z<<" "<<z1<<endl;
    if(x<=y && x<=z &&x<=z && x<=z1){
        cout<<x;
    }
    else if(y<=x && y<=z &&y<=z1){
        cout<<y;
    }
    else if(z<=y && z<=x &&z<=z1){
        cout<<z;
    }
    else if(z1<=y && z1<=x &&z1<=z){
        cout<<z1;
    }
}

