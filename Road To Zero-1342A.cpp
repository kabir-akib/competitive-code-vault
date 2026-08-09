#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            long long x,y,a,b,dollar=0,dollar2=0,dollar3=0;
    cin>>x>>y;
    cin >>a>>b;
    dollar2=x*a + y*a;
    if(x==y){dollar3=x*b + y*b;

    }

    if(x<y){
        dollar += x*b;
        dollar=dollar+(a*(y-x));
    }
    else if(x>y){
        dollar+=y*b;
        dollar=dollar+(a*(x-y));
    }
    else if(x==y){
        dollar+=x*b;
    }

 if(dollar3==0){
        dollar3=dollar;
    }
    //cout<<dollar<<" "<<dollar2<< " "<<dollar3<<endl;



     if(dollar<=dollar2 && dollar<=dollar3){
      cout<<dollar<<endl;
       }
       else if(dollar2<=dollar && dollar2 <=dollar3){
           cout<<dollar2<<endl;
             }
             else{
                cout<<dollar3<<endl;
             }
    }
}
