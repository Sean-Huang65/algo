//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4.1,sse4.2,avx,avx2,popcnt,tune=native")
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solver {
    public:
        pair<string, int> digsum(int N) {
            int M;
            M = 2 * N;
            string x;
            if (N < 4) {
                x = to_string(N);
            }
            else {
                while (N > 0) {
                    x = to_string(min(4, N)) + x;
                    N -= 4;
                }
            }
            return {x, M};
        }
};

int main() {
    Solver solver;
    int N;
    cin >> N;
    auto res = solver.digsum(N);
    cout << res.second << endl << res.first;
    return 0;
}