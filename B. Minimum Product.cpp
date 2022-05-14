#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define lli long long int
#define t               lli t;cin>>t;while(t-->0)
#define ainput  int n;cin>>n;int a[n];for(int i=0;i<n;i++){cin>>a[i];}
#define vec vector<lli>v;
vec
#define avinput  int n;cin>>n;int a[n];for(int i=0;i<n;i++){cin>>a[i];v.push_back(a[i]);}
#define vp  for(lli i=0;i<v.size();i++) {cout<<v[i]<<" ";}cout<<endl;
#define ln cout<<endl;
#define   Y   cout<<"YES"<<endl;
#define   N   cout<<"No"<<endl;
set<lli>s1;
set<lli>s2;
set<string>st2;
vector<lli>v1;
vector<lli>v2;
vector<lli>v3;
vector<lli>v4;
vector<lli>v5;
vector<pair<lli,lli> >v6;
vector<string>v7;
vector<string>v8;
vector<char>v9;
vector<double>v11;
list<lli>l;
map<string,lli> m;
//****coding start****


 int main(){
     t{
lli a,b,x,y,n,p=0,q=0,r=0;cin>>a>>b>>x>>y>>n;


p=max((b-n),y)*max((a-(n-min(b-y,n))),x);
q=max((a-n),x)*max((b-(n-min(a-x,n))),y);
cout<<min(p,q)<<endl;
     }}
