     #include<bits/stdc++.h>
        #include<vector>
        #include<string>
        //#include <boost/algorithm/string.hpp>
        using namespace std;
        #define lli long long int
        #define test                lli t;cin>>t;while(t-->0)
        #define ainput  lli n;cin>>n;lli a[n];for(lli i=0;i<n;i++){cin>>a[i];}
        #define vec vector<lli>v;
        #define INF 1000000000
        vec
        #define avinput  int n;cin>>n;int a[n];for(lli i=0;i<n;i++){cin>>a[i];v.push_back(a[i]);}
        #define vp  for(lli i=0;i<v.size();i++) {cout<<v[i]<<" ";}cout<<endl;
        //#define bhuiyansadiquddin@gmail.comvp1  for(lli i=0;i<v1.size();i++) {cout<<v1[i]<<" ";}cout<<endl;
        #define vp1  for(lli i=0;i<v1.size();i++) {cout<<v1[i]<<" ";}cout<<endl;
        #define vp3  for(lli i=0;i<v3.size();i++) {cout<<v3[i]<<" ";}cout<<endl;
        #define vp6  for(lli i=0;i<v6.size();i++) {cout<<v6[i].first<<" "<<v6[i].second<<endl;}
        #define vp16  for(lli i=0;i<v16.size();i++) {cout<<v16[i].first<<" "<<v16[i].second<<endl;}
        #define ln cout<<endl;

        #define pii pair<int,int>
        //cout << fixed << setprecision(10) <<((double)((sum*1.0)/((n*1.0-k*1.0)+1.0))) << endl;
        set<lli>::iterator it;
        set<lli>st1 ;
        set<lli>st2;
        set<lli>st3;
        set<char>s11;
        set<char>s22;
        set<string>dsu;
        set<set<char> > st4;//set er moddhe set insert kora jai...

        vector<lli>v1;
        vector<lli>v2;
        vector<lli>v3;
        vector<lli>v4;
        vector<lli>v5;
        vector<pair<lli,lli> >v6;
        vector<pair<lli,lli> >v61;
        vector<pair<lli,string> >v16;
        vector<string>v7;
        vector<string>v8;
        vector<char>v9;
        vector<char>v99;
        vector<double>v11;
        vector<vector<pair<lli,lli> > >adjlist(100000);
        vector<pair<lli,lli> >node;
        vector<vector<lli> >vc(1001);

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
         //sort(v6.begin(),v6.end(),cmp); cmp ekta bool function jetar moddhe jekono change kora jai
        //*max_element(a, a + n);
        //*min_element(v.begin(), v.end())
        // sort(v.begin(), v.end());
        //reverse(s1.begin(),s1.end()); string o array er moto kaj kore...
        //getline(cin,l1); line input near jonno space with string...
        //s[i]-'0'....string to int
        //lli mini=2e9;
        // it = prev(myset.end()); //end of set;
        // v.assign(s.begin(), s.end());
        //cout << fixed << setprecision(10) <<((double)((sum*1.0)/((n*1.0-k*1.0)+1.0))) << endl;

        #define   Y   cout<<"YES"<<endl;
        #define   N   cout<<"NO"<<endl;
          #define   _1   cout<<"-1"<<endl;
// PRIME NUMBER TEST//
//bool prime(int n)
//{
//    if(n<2)return false;
//    if(n<=3)return true;
//    if(n%2==0)return false;
//    for(int i=3;i*i<=n;i+=2)
//    {
//        if(n%i==0)return false;
//    }
//    return true;


        //**************Coding  Start*******************
         int main(){
test{
lli n;cin>>n;string s;cin>>s;
for(lli i=0;i<n;i++){
        if(s[i]!='?'){
           v.push_back(i);
}
        }
        if(v.size()==0){  lli y=0;
           for(lli i=0;i<n;i++){

            if(y==0){
                s[i]='B';
                y=1;
            }
            else{
                  s[i]='R';
                  y=0;
            }


        }

        }
for(lli i=0;i<v.size();i++){
        lli x=v[i];
     while(v[i]-1>=0&&s[v[i]-1]=='?') {
        if(s[v[i]]=='R'){
           s[v[i]-1]='B';
        }
        else if(s[v[i]]=='B'){
           s[v[i]-1]='R';
        }
        v[i]--;

     }
v[i]=x;
       while(v[i]+1<n&&s[v[i]+1]=='?') {
        if(s[v[i]]=='R'){
           s[v[i]+1]='B';
        }
        else if(s[v[i]]=='B'){
           s[v[i]+1]='R';
        }
        v[i]++;

     }



}




cout<<s<<endl;
v.clear();




}}
