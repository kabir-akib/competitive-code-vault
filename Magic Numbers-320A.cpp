#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();){
        if (s[i]!='1'){
            cout<<"NO";
            return 0;
        }
        if (i+ 2<s.size() && s[i+1]=='4' && s[i+2]=='4'){
            i+=3;
        }
        else if(i+1< s.size() && s[i+1]=='4'){
            i+=2;
        }
        else {
            i++;
        }
    }
    cout << "YES";
}
