
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


//*********************************** coding start *****************************************//
int main(){
lli  n;cin>>n;
lli  a[n];
v1.push_back(0);
for (int i = 0; i <n; i++)
    {    cin>>a[i];
   v2.push_back(v1[i]+a[i]);
   if(v2[i]>v1[i]){
    v1.push_back(v2[i]);
   }
   else v1.push_back(v1[i]);
        }
 for(lli i=0;i<v2.size();i++) {cout<<v2[i]<<" ";}cout<<endl;
}
