#include<iostream>
using namespace std;
int main(){
    int arr[6][6];
    int a,b,x,y,temp,c=0;
    for (int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>arr[i][j];
            if (arr[i][j]==1){
                a=i;
                b=j;
                if(a>=3){
                   x=a-3;
                }
                else{
                x=3-a;
                }
                if(b>=3){
                    y=b-3;
                }
                else{
                    y=3-b;
                }
                temp=arr[i][j];
                arr[i][j]=arr[3][3];
                arr[3][3]=temp;
                c=c+x+y;
            }
        }
    }
    cout<<c;

}
