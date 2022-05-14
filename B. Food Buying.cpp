#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define lli long long int
#define t                lli t;cin>>t;while(t-->0)
#define ainput  int n;cin>>n;int a[n];for(int i=0;i<n;i++){cin>>a[i];}
#define vec vector<lli>v;
vec
#define avinput  int n;cin>>n;int a[n];for(int i=0;i<n;i++){cin>>a[i];v.push_back(a[i]);}
#define vp  for(lli i=0;i<v.size();i++) {cout<<v[i]<<" ";}cout<<endl;
//#define ln cout<<endl;
#define   Y   cout<<"YES"<<endl;
#define   N   cout<<"No"<<endl;
//****coding start****
set<lli>s1;set<lli>s2;
vector<lli>v1;
vector<lli>v2;
vector<lli>v3;vector<lli>v4;vector<lli>v5;vector<pair<lli,lli> >v6;
vector<string>v7;
list<lli>l;

//*******
int main(){
t{
lli s,d;
cin>>s;
d=s;
while(s/10!=0){
    d=d+s/10;
    s=s/10+s%10;
}
cout<<d<<endl;
}}
