#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,x=0,y=0,z=0;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d){
     x=(a-c);
     y=(a-b);
     z=(a-d);
    }
     else if(b>a && b>c && b>d){
     x=(b-a);
     y=(b-c);
     z=(b -d);
    }
    else if(c>a && c>a && c>d){
     x=(c-a);
     y=(c-b);
     z=(c -d);
    }
    else {
     x=(d-a);
     y=(d-b);
     z=(d-c);
    }

    cout<<x<<" "<<y<<" "<<z<<endl;
}
