#include<bits/stdc++.h>
#include "testlib.h"
 
struct DSU{
    int *z;
    DSU(int n): z(new int [n]) { std::fill(z, z+n, -1); }
    int head(const int x) { return z[x] < 0 ? x: (z[x] = head(z[x])); }
    int size(const int x) { return z[x] < 0 ? -z[x]: (z[x] = head(z[x])); }
    bool same(const int x, const int y) { return head(x) == head(y); }
    bool unite(int x, int y){
        const int& px = head(x), py = head(y);
        if(px == py) return false;
        if(z[px] > z[py]) z[py] += z[px], z[px] = py;
        else z[px] += z[py], z[py] = px;
        return true;
    }
};
 
int main (int argc, char** argv) {
	registerValidation(argc, argv);
 
	int t = inf.readInt(1, 10'000, "t");
	inf.readEoln();
 
	int sum_n = 0;
	const int MAX = 100'000;
 
	while (t--)	{
		int n = inf.readInt(2, MAX, "n");
		inf.readEoln();
		sum_n += n, ensuref(sum_n <= MAX, "Too many vertices");

        for(int i=0; i<n; i++) 
        {
            inf.readInt(1,1000'000'000,"a_i");
            if(i==n-1) inf.readEoln();
            else inf.readSpace();
        }

		DSU d(n);
	
		for (int i = 1; i < n ; i++) {
			int u = inf.readInt(1, n, "u");
			inf.readSpace();
			int v = inf.readInt(1, n, "v");
			inf.readEoln();
	
			ensuref(d.unite(u - 1, v - 1), "Given graph is not a tree");
		}
	}
 
	inf.readEof();
    return 0;
}
