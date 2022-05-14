#include<bits/stdc++.h>
#include<vector>
#include<string>
//#include <boost/algorithm/string.hpp>
using namespace std;
#define lli long long int
#define test                lli t;cin>>t;while(t-->0)
#define ainput  int n;cin>>n;int a[n];for(int i=0;i<n;i++){cin>>a[i];}
#define vec vector<lli>v;
#define INF 1000000000
vec
#define avinput  int n;cin>>n;int a[n];for(int i=0;i<n;i++){cin>>a[i];v.push_back(a[i]);}
#define vp  for(lli i=0;i<v.size();i++) {cout<<v[i]<<" ";}cout<<endl;
#define vp1  for(lli i=0;i<v1.size();i++) {cout<<v1[i]<<" ";}cout<<endl;
#define vp2  for(lli i=0;i<v2.size();i++) {cout<<v2[i]<<" ";}cout<<endl;
#define vp3  for(lli i=0;i<v3.size();i++) {cout<<v3[i]<<" ";}cout<<endl;
#define vp6  for(lli i=0;i<v6.size();i++) {cout<<v6[i].first<<" "<<v6[i].second<<endl;}
#define vp16  for(lli i=0;i<v16.size();i++) {cout<<v16[i].first<<" "<<v16[i].second<<endl;}
#define ln cout<<endl;
//cout << fixed << setprecision(10) <<((double)((sum*1.0)/((n*1.0-k*1.0)+1.0))) << endl;
set<lli>st1;
set<lli>st2;
set<string>st3;
vector<lli>v1;
vector<lli>v2;
vector<lli>v3;
vector<lli>v4;
vector<lli>v5;
vector<pair<lli,lli> >v6;
vector<pair<lli,string> >v16;
vector<string>v7;
vector<string>v8;
vector<char>v9;
vector<char>v99;
set<char>s11;
set<char>s22;
vector<double>v11;
list<lli>l;
//unordered_map<lli,lli>mp;
//unordered_multiset<string> sm;
stack<lli>stk;
stack<lli>stk1;
vector<vector<pair<lli,lli> > >adjlist(100000);

set<string>dsu;
//unordered_map<lli,lli>mp1;
vector<pair<lli,lli> >node;
//****coding start****
vector<vector<lli> >vc(1001);
int main()
{
test{
lli n;cin>>n;
lli a[n];
for(lli i=0;i<n;i++){
    cin>>a[i];
st1.insert(a[i]);
}
if(st1.size()==1)cout<<-1<<endl;
else{
    lli mx=*max_element(a,a+n);
    lli index;
    for(lli i=0;i<n;i++){
        if(a[i]==mx){
            if(i==0){
                if(a[i+1]!=a[i]){
                    index=i;
                }
            }
            else if(i==n-1){
                if(a[i-1]!=a[i]){
                    index=i;
                }
            }
            else{
                if(a[i+1]!=a[i]){
                    index=i;
                }
               else  if(a[i-1]!=a[i]){
                    index=i;
                }
            }
        }
    }
    cout<<index+1<<endl;
}
st1.clear();
}

 return 0;
}
