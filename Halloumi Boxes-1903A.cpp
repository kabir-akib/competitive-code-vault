#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int box,num;
        cin>>box>>num;
        vector<int>v(box);
        for(int i=0;i<box;i++){
        cin>>v[i];
        }
        if (num>1){
            cout<<"YES"<<endl;
        }
        else{
             if (is_sorted(v.begin(),v.end())){
                cout<<"YES"<<endl;
             }
             else{
                cout<<"NO"<<endl;
             }
        }

    }
}
