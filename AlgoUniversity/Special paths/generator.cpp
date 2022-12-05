#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

signed main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    int mn = atoi(argv[3]);
    int mx = atoi(argv[4]);

    vector<int> n_list = rnd.partition(t, sum_n, 2);

    for(int test_case=0; test_case<t; test_case++)
    {
        setTestCase(test_case+1);
        int n = n_list[test_case], skew = rnd.next(-1000,1000);
        vector<int> p(n), val(n);

        /* setup parents for vertices 1..n-1 */
        for(int i = 0; i < n; ++i)
            if (i > 0)
                p[i] = rnd.wnext(i, t);

        /* shuffle vertices 1..n-1 */
        vector<int> perm(n); iota(begin(perm),end(perm),0);
        shuffle(perm.begin() + 1, perm.end());

        /* put edges considering shuffled vertices */
        vector<pair<int,int> > edges;
        for (int i = 1; i < n; i++)
            if (rnd.next(2))
                edges.push_back(make_pair(perm[i], perm[p[i]]));
            else
                edges.push_back(make_pair(perm[p[i]], perm[i]));

        /* shuffle edges */
        shuffle(edges.begin(), edges.end());

        //set the values of nodes
        for(int i=0; i<n; i++) val[i] = rnd.next(mn,mx);

        println(n);
        println(val);
        for(int i=0; i<edges.size(); i++) println(edges[i].first+1, edges[i].second+1);
    }

    return 0;
}