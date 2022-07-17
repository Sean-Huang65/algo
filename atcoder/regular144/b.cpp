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
        int GiftTax(vector<long long> arr, int add, int sub) {
            int n = arr.size();
            sort(arr.begin(), arr.end());
            int l = 0, r = n-1;
            while (l < r && arr[r]-sub >= arr[l]+add) {
                arr[l] += add;
                arr[r] -= sub;
                int p = l;
                while (p<r && arr[l] < arr[l+1]) {
                    swap(arr[p], arr[p+1]);
                    p++;
                }
                int q = r;
                while (q>l && arr[q] < arr[q-1]) {
                    swap(arr[q], arr[q-1]);
                    q--;
                }
            }
            return arr[l];
        }

        // int GiftTax(vector<long long> arr, int add, int sub) {
        //     int n = arr.size();
        //     sort(arr.begin(), arr.end());
        //     priority_queue<pair<int, int>> maxq;
        //     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minq;
        //     for (int i=0; i<n; i++) {
        //         maxq.emplace(arr[i], i);
        //         minq.emplace(arr[i], i);
        //     }
        //     int rb = maxq.top().second;
        //     int lb = minq.top().second;
        //     while (rb > lb && maxq.top().first-sub >= minq.top().first+add) {
        //         auto tmp = maxq.top();
        //         rb = min(rb, tmp.second);
        //         maxq.pop();
        //         maxq.emplace(tmp.first-sub, tmp.second);

        //         tmp = minq.top();
        //         lb = max(lb, tmp.second);
        //         minq.pop();
        //         minq.emplace(tmp.first+add, tmp.second);
        //     }
        //     return minq.top().first;
        // }
};

int main() {
    Solver solver;
    int N, a, b;

    // 1
    cin >> N >> a >> b;
    vector<long long> arr (N, 0);
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    cout << solver.GiftTax(arr, a, b);
    return 0;
}