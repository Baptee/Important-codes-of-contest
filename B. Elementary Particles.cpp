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
        #define avinput  lli n;cin>>n;lli a[n];for(lli i=0;i<n;i++){cin>>a[i];v.push_back(a[i]);}
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
        vector<pair<lli,lli> >v7;
        vector<pair<lli,string> >v16;
        //vector<string>v7;
        vector<string>v8;
        vector<char>v9;
        vector<char>v99;
        vector<double>v11;
        vector<vector<pair<lli,lli> > >adjlist(100000);
        vector<pair<lli,lli> >node;
        vector<vector<lli> >vc(1001);

        map<string,int>mps;
        map<lli,lli>mpii;
         map<lli,lli>mpi2;
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
         //sort(a,a+n);
        //*max_element(a, a + n);
        //*min_element(v.begin(), v.end())
        // sort(v.begin(), v.end());
        //reverse(s1.begin(),s1.end());
        //reverse(a, a + n);  string o array er moto kaj kore...
        //getline(cin,l1); line input near jonno space with string...
        //s[i]-'0'....string to int
        //=to_string(n); int to string;
        //lli mini=2e9;
        // it = prev(myset.end()); //end of set;
        // v.assign(s.begin(), s.end());
        //cout << fixed << setprecision(10) <<((double)((sum*1.0)/((n*1.0-k*1.0)+1.0))) << endl;
        //x=INT_MAX;10^9=1000000000


        //vect.push_back( make_pair(arr[i],arr1[i]) ); vec pair input

        //for(lli i=0;i<s.size();i++)

        //for(lli i=0;i<n;i++)

        #define   Y   cout<<"YES"<<endl;
   //     #define   N   cout<<"NO"<<endl;
          #define   _1   cout<<"-1"<<endl;
          // cout<<c<<endl;
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
     const lli N=1e12;
     lli p=0,x=1;
    lli mp=0;
     lli mx=0;

  for(lli i=1;p<N;i++){
    p=pow(2,i);

 st1.insert(p);




  }
   for(lli i=1;x<N;i++){

 x=x*i;

 st1.insert(x);
 //cout<<x<<endl;



  }

  v.assign(st1.begin(), st1.end());
  vp
  //cout<<v1.size()<<endl;
 // cout<<v2.size()<<endl;
  test{
lli n;cin>>n;

lli m=v.size()-1;
lli c=0;


while(m>=0&&n>0){

   if(v[m]<=n){
    c++;
    n=n-v[m];
    cout<<v[m]<<endl;

   }
   m--;

     }





 cout<<c<<endl;

}}
// 432931785912

//12























