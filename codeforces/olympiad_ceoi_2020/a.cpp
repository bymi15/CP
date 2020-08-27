#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
vector<pair<int, int>> sections;

map<pair<int, int>, unsigned long long> mem;

unsigned long long rectCount2(int n, int m) {
    auto it = mem.find({n, m});
    if(it != mem.end()) return it->second;
    unsigned long long count = ((m * n * (n + 1) * (m + 1)) / 4) % M;
    mem[{n, m}] = count;
    return count;
}

unsigned long long rectCount(pair<int, int> rect) {
    return rectCount2(rect.first, rect.second);
}

int main() {
    int N;
    cin >> N;
    vector<int> heights(N);
    for(int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    for(int i = 0; i < N; i++) {
        int width;
        cin >> width;
        sections.push_back({heights[i], width});
    }

    unsigned long long ans = 0;
    unsigned long long totalWidth = 0;
    for(int i = 0; i < N; i++) {
        totalWidth += sections[i].second;
    }
    // for(int i = 0; i < N; i++) {
    //     ans += rectCount(sections[i]);
    // }

    // pair<int, int> shortestRect = sections[0];
    // unsigned long long totalWidth = 0;
    // for(int i = 0; i < N; i++) {
    //     totalWidth += sections[i].second;
    //     if(sections[i].first < shortestRect.first) {
    //         shortestRect = sections[i];
    //     }
    // }
    // unsigned long long subAns = rectCount2(shortestRect.first, totalWidth);

    // for(int i = 0; i < N; i++) {
    //     subAns -= rectCount2(shortestRect.first, sections[i].second);
    // }
    // ans += subAns;
    ans = rectCount2(sections[0].first, totalWidth);
    cout << ans % M;
}