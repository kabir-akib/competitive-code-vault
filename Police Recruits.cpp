#include<iostream>
using namespace std;
int main(){
    int a;

    cin>> a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];

    }
    int c=0;
    int p=0;
    int x=0;
    for(int i=0;i<a;i++){
            if(b[i]<0 && p==0){
                x++;
                }
               else if(b[i]<0 && p>0){
                        c++;
                        p=p-c;
                        c=c-1;
                }
                else{
                   p=p+b[i];
            }
    }
cout<< x+c;

}
