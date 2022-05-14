#include<iostream>
//#include <vector>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t-->0)
  {
      int n,c=0,o=1,d=0;
  cin>>n;
  int a[n];
 for (int i = 1; i <n; i++){
     if(i<=n/2){
        a[i]=2*i;
        c=c+a[i];
     }
     else{

        a[i]=o;
        d=d+a[i];
         o=o+2;
     }
 }
 a[n]=c-d;
 if(a[n]%2!=0){
     cout<<"YES"<<endl;
     for (int i = 1; i <= n; i++){
      cout<<a[i]<<endl;}
 }
 else
   cout<<"NO"<<endl;
 }}

