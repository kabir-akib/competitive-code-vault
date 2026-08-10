 #include<iostream>
 using namespace std;
 int main (){
     int n;
     cin>>n;
     int arr[n];
     int mx=0,sum=0;
     for (int i=0;i<n;i++){
        cin>>arr[i];
        if(mx<arr[i]){
            mx=arr[i];
        }
     }
     for(int i=0;i<n;i++){
        sum+=(mx-arr[i]);
     }
     cout<<sum;

 }
