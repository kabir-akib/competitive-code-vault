#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f,g,h;
        cin>>a>>b;
        cin>>c>>d;
        cin>>e>>f;
        cin>>g>>h;
        if(a==c){
            cout<<abs(b-d)*abs(b-d)<<endl;
        }
        else if(a==e){
            cout<<abs(b-f)*abs(b-f)<<endl;
        }
         else if(a==g){
            cout<<abs(b-h)*abs(b-h)<<endl;
        }
    }
}
