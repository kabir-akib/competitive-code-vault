#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0,c=0;
    cin>>n;
    vector<int>v(n);
    vector<int>one,two,three;
    for (int i =0;i<n;i++){
        cin>>v[i];
        if(v[i]==1){
            a++;
            one.push_back(i+1);
        }
        else if(v[i]==2){
            b++;
            two.push_back(i+1);
        }
        else if (v[i]==3){
            c++;
            three.push_back(i+1);
        }
    }

    if (a==0 ||b==0 ||c==0){
        cout<<0<<endl;
        return 0;
    }
    int mn =min({a,b,c});
    cout<<mn<<endl;
    for (int i=0;i<mn;i++){
      cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }



}
