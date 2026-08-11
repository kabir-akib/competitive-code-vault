#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if (a==b==c){
            a+=2;
            b+=2;
            c+=1;
        }

   else if(a<=b && a<=c){
            a+=3;
           if (b<c){
            b+=2;

           }
          else if (c<b){
            c+=2;

           }
           else if(b==c){
            a+=2;
           }

        }

       else if(b<=c && b<=a){
            b+=3;
           if (a<c){
            a+=2;
           }
           else if (a>c){
            c+=2;

           }
           else if (a==c){
            b+=2;
           }

        }
       else if(c<=b && c<=a){
            c+=3;
           if (b<a){
            b+=2;
           }
           else if (a<b){
            a+=2;

           }
           else if (a==b){
            c+=2;
           }

        }

        cout<<a*b*c<<endl;







    }
}
