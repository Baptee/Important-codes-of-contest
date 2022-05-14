
#include<bits/stdc++.h>
#include<vector>
#include<string>
//#include <boost/algorithm/string.hpp>
using namespace std;
#define lli long long int
#define test                lli t;cin>>t;while(t-->0)
#define ainput  lli n;cin>>n;lli a[n];for(lli i=0;i<n;i++){cin>>a[i];}
//#define vec vector<lli>v;
#define INF 1000000000
//vec
#define avinput  int n;cin>>n;int a[n];for(lli i=0;i<n;i++){cin>>a[i];v.push_back(a[i]);}
#define vp1  for(lli i=0;i<v1.size();i++) {cout<<v1[i]<<" ";}cout<<endl;
//#define bhuiyansadiquddin@gmail.comvp1  for(lli i=0;i<v1.size();i++) {cout<<v1[i]<<" ";}cout<<endl;
#define vp2  for(lli i=0;i<v2.size();i++) {cout<<v2[i]<<" ";}cout<<endl;
#define vp3  for(lli i=0;i<v3.size();i++) {cout<<v3[i]<<" ";}cout<<endl;
#define vp6  for(lli i=0;i<v6.size();i++) {cout<<v6[i].first<<" "<<v6[i].second<<endl;}
#define vp16  for(lli i=0;i<v16.size();i++) {cout<<v16[i].first<<" "<<v16[i].second<<endl;}
#define ln cout<<endl;

#define pii pair<int,int>
//cout << fixed << setprecision(10) <<((double)((sum*1.0)/((n*1.0-k*1.0)+1.0))) << endl;
//set<lli>::iterator it;
set<lli>st1 ;
set<lli>st2;
set<lli>st3;
set<char>s11;
set<char>s22;
set<string>dsu;
set<set<char> > st4;//set er moddhe set insert kora jai...
vector<lli>::iterator it;
//     vector<lli>::iterator it1;
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
vector<double>v11;
vector<vector<pair<lli,lli> > >adjlist(100000);
vector<pair<lli,lli> >node;
vector<vector<lli> >vc;
//vector<vector<lli> >vec;
vector<vector<lli> >vec1;
//vector<vector<lli> >ans(row,vector<lli>(col));


map<string,int>mps;
map<lli,lli>mpii;
map<char,lli>mpci;
map<string,string>mpss;
map<pair<lli,lli>,lli>mppi;
//unordered_map<lli,lli>mp;
//unordered_multiset<string> sm;
//unordered_map<lli,lli>mp1;

list<lli>l;

stack<lli>stk;
stack<lli>stk1;
  int mn=INT_MAX;
//sort(v6.begin(),v6.end(),cmp); cmp ekta bool function jetar moddhe jekono change kora jai
//*max_element(a, a + n);
//*min_element(v.begin(), v.end())
// sort(v.begin(), v.end());
//reverse(s1.begin(),s1.end()); string o array er moto kaj kore...
//getline(cin,l1); line input near jonno space with string...
//s[i]-'0'....string to int

#define   Y   cout<<"YES"<<endl;
#define   N   cout<<"NO"<<endl;

int main()
{
   test{
lli r,c;cin>>r>>c;//n=r,m=col;
 lli n;


 lli ro[r*c],co[r*c],b[r][c];

    for (int i = 0; i < r; i++) {


        for (int j = 0; j < c; j++) {
                cin>>n;
         co[n]=j;


        }

        }
      for (int j = 0; j < c; j++)  {
          for (int i = 0; i < r; i++)

       { cin>>n;

       ro[n]=i;


        }




        }
         for (int i = 1; i < r*c+1; i++){

             b[ro[i]][co[i]]=i;


         }

 for (int i = 0; i < r; i++){

     for (int j = 0; j < c; j++) {



              cout << b[i][j] << " ";
        }cout << endl;
    }





   }}
/*
2
3
2
1
6
2
5
4
3
5
3
6
2
4
1

*/
