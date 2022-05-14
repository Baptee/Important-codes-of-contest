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
    lli x,n,m;
    cin>>x>>n>>m;

    while(n>0||m>0){
             if(x<=0)break;
            if(x>=21&&n>0){
                    x=(x/2)+10;
                      n--;}

            else if(m>0){  x=x-10;m--;}

                   if(x<21&&m==0)
                          break;



//cout<<x<<endl;

    }



    if(x<=0){Y}
    else N
}
}
//7
//100 3 4
//189 3 4
//64 2 3
//63 2 3
//30 27 7
//10 9 1
//69117 21 2
