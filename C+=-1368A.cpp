#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;

        int sum = 0;

        while(a <= c && b <= c){
            if(a < b)
                a += b;
            else
                b += a;

            sum++;
        }

        cout << sum << endl;
    }
}
