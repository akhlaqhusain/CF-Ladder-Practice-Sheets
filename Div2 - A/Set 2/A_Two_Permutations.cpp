#include<iostream>
using namespace std;


int main(){

 int t;
 cin>>t;
 while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b<n-1 || (n==a and a==b)){
       cout<<"YES\n";
    }else{
       cout<<"NO\n";
    }
 }
 return 0;
    
}