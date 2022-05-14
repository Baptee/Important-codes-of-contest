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
//****coding start****

int main(){
    t{
        lli p,f,cs,cw,s,w,x=0,y=0;
        cin>>p>>f>>cs>>cw>>s>>w;
        x=cs*s;
        y=cw*w;
        if((x+y)<=(p+f)){
             cout<<cs+cw<<endl;
        }
        else{
            if(x<y){
                 cout<<cs+((p+f)-x)/w<<endl;
            }
            else{
                cout<<cw+((p+f)-x)/s<<endl;
            }
        }


       }}
