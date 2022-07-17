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
        int test() {
            return 0;
        }
};

int main() {
    int w;
    cin >> w;
    if (w%2 == 0 && w>2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}