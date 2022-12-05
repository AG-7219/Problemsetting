#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include "testlib.h"

#define int               long long
#define ld                long double
#define get(T,args...)    T args; read(args);
#define init(a,T,n,s)     vector<T> a((n)+1,s); cin>>a;
#define putn(args...)     { put(args); cout<<"\n"; }
#define pute(args...)     { put(args); cout<<endl; }
#define putr(args...)     { putn(args) return ;}
#define rep(i,a,b)        for(int i=(a); i<(b); i++)
#define repr(i,a,b)       for(int i=(a); i>(b); i--)
#define logarr(arr,f,l)   { auto start=arr.begin(), end=arr.begin(); advance(start,(f)); advance(end,(l)); for(auto it=start; it!=end; it++) cout<<*it<<" "; cout<<"\n"; }
#define all(x)            x.begin(), x.end()
#define rall(x)           x.rbegin(), x.rend()
#define sort_by(span,p)   sort(span, [&](const auto &l, const auto &r) { return p; })
#define f(u, args...)     [&](auto &&u) { return args; }
#define g(u, v, args...)  [&](auto &&u, auto &&v) { return args; }
#define uniq(x)           x.erase(unique(all(x)),x.end());
#define sz(x)             (int)(x).size()
#define mid(l,r)          ((l)+((r)-(l))/2)
#define zov(v,z,c)        ((c) ? (v) : (z))
#define pii               pair<int,int>
#define pb                emplace_back
#define pf                push_front
#define fr                first
#define sc                second
#define sumv(v,b,e)       accumulate((v).begin()+b,(v).begin()+e,0LL)
#define minv(v,b,e)       min_element((v).begin()+b,(v).begin()+e)
#define maxv(v,b,e)       max_element((v).begin()+b,(v).begin()+e)
#define precise(n)        cout<<fixed<<setprecision((n))
#define bpc(n)            ((n) ? __builtin_popcountll((unsigned long long)(n)) : 0)
#define ctz(n)            ((n) ? __builtin_ctzll((unsigned long long)(n)) : 0)
#define clz(n)            ((n) ? __builtin_clzll((unsigned long long)(n)) : 64)
#define MSB(n)            ((n) ? (1LL<<__lg(n)) : 0)
#define LSB(n)            ((n)&(-(n)))
#define vec(args...)      std::vector<args>
#define set(args...)      std::set<args,Comp<args> >
#define pqueue(args...)   std::priority_queue<args,vector<args>,Comp<args> > 
#define oset(args...)     tree<args, null_type, less<args>, rb_tree_tag, tree_order_statistics_node_update>

const int N = 100001, M = 998244353, mod = 1000000007, MX = INT64_MAX, MN = INT64_MIN, oo = 1e18;

using namespace __gnu_pbds;
using namespace std;

vec(string) tokenizer(string str,char ch) {std::istringstream var((str)); vec(string) v; string t; while(getline((var), t, (ch))) {v.pb(t);} return v;}

template<typename T> struct Comp { bool operator()(const T& l, const T& r) const { return l < r; } };
template<typename T1, typename T2> inline istream& operator >> (istream& in, pair<T1,T2>& a) { in>>a.first>>a.second; return in; }
template<typename T1, typename T2> inline ostream& operator << (ostream& out, pair<T1,T2> a) { out<<a.first<<" "<<a.second; return out; }
template<typename T> istream& operator >> (istream& in, vector<T>& v) { rep(i,1,sz(v)) cin>>v[i]; return in; }
template<typename T,typename T1> inline bool amax(T &a,T1 b){ if(b>a) { a=b; return true; } return false; }
template<typename T,typename T1> inline bool amin(T &a,T1 b){ if(b<a) { a=b; return true; } return false; }

template<typename... T>
void read(T&... args) { ((cin>>args), ...); }

template<typename... T>
void put(T&&... args) { ((cout<<args<<" "), ...);}

int leader(vector<int>& dsu, int idx)
{
    return dsu[idx] == idx ? dsu[idx] : (dsu[idx] = leader(dsu, dsu[idx]));
}

bool merge(vector<int>& dsu, int a, int b)
{
    a = leader(dsu, a);
    b = leader(dsu, b);
    if (a == b)
        return false;
    else
    {
        if (rnd.next(2) == 0)
            dsu[a] = b;
        else
            dsu[b] = a;
        return true;
    }
}

signed main(int32_t argc, char* argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    registerValidation(argc, argv);

    int n = inf.readInt(1, 200000, "n");
    inf.readSpace();
    int q = inf.readInt(1,200000,"q");
    inf.readEoln();

    for(int i=0; i<n; i++)
    {
        inf.readInt(1,1000'000'000,"v_i");
        if(i == n-1) inf.readEoln();
        else inf.readSpace();
    }

    vector<int> dsu(n);
    rep(i,0,n)
        dsu[i] = i;

    set<pair<int,int> > edges;

    rep(i,0,n - 1)
    {
        int x = inf.readInt(1, n, "x_i");
        inf.readSpace();
        int y = inf.readInt(1, n, "y_i");
        inf.readEoln();

        ensuref(x != y, "Tree can't contain loops");
        ensuref(edges.count(make_pair(x, y)) == 0, "Tree can't contain multiple edges between a pair of vertices");

        edges.insert(make_pair(x, y));
        edges.insert(make_pair(y, x));

        ensuref(merge(dsu, x - 1, y - 1), "Tree can't contain cycles");
    }

    rep(i,0,q)
    {
        int t = inf.readInt(1,2,"t_i");
        inf.readSpace();
        if(t == 1)
        {   
            inf.readInt(1,n,"s");
            inf.readSpace();
            inf.readInt(1,1000'000'000,"x");
            inf.readEoln();
        }
        else 
        {
            inf.readInt(1,n,"s");
            inf.readEoln();
        }
    }

    inf.readEof();

    return 0;
}
