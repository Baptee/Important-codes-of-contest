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
    #define vp2  for(lli i=0;i<v2.size();i++) {cout<<v2[i]<<" ";}cout<<endl;
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

    #define   Y   cout<<"YES"<<endl;
    #define   N   cout<<"NO"<<endl;

    //**************Coding  Start*******************
    int main(){

    test{
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int maxi=*max_element(a.begin(),a.end());
        int left=0;
        for(int i=0;i<n;i++) left+=(maxi-a[i]);
        if(k>left){
            cout<<-1<<"\n";

        }
        int ans=-1;
        for(int i=0;i<k;i++){
            bool fill=0;
            for(int j=0;j<n-1;j++){
                if(a[j]<a[j+1]){
                    ans=j+1;
                    a[j]++;
                    fill=1;
                    break;
                }
            }
            if(fill==0) ans=-1;
        }
        cout<<ans<<"\n";
    }}
