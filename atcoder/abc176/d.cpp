#include <bits/stdc++.h>
using namespace std;

int H, W;

bool outOfBound(int i, int j) {
    return i < 0 || i >= H || j < 0 || j >= W;
}

int main() {
    int CH, CW, DH, DW;
    cin >> H >> W >> CH >> CW >> DH >> DW;
    CH--, CW--, DH--, DW--;

    vector<string> S(H);
    for(int i = 0; i < H; i++) {
        cin >> S[i];
    }

    int cost[H][W];
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cost[i][j] = 1e7;
        }
    }

    map<pair<int, int>, bool> MAP_MOVE_A;
    MAP_MOVE_A[{-1, 0}] = true;
    MAP_MOVE_A[{0, -1}] = true;
    MAP_MOVE_A[{1, 0}] = true;
    MAP_MOVE_A[{0, 1}] = true;

    deque<pair<int, int> > dq;
    cost[CH][CW] = 0;
    dq.push_back({CH, CW});
    while(!dq.empty()) {
        pair<int, int> cur = dq.front();
        dq.pop_front();
        if(cur.first == DH && cur.second == DW) {
            break;
        }

        for(int di = -2; di <= 2; di++) {
            for(int dj = -2; dj <= 2; dj++) {
                int i = cur.first + di;
                int j = cur.second + dj;

                if(outOfBound(i, j) || S[i][j] == '#' || (di == 0 && dj == 0)) continue;

                int magic = 1;
                if(MAP_MOVE_A.find({di, dj}) != MAP_MOVE_A.end()) {
                    magic = 0;
                }

                if(cost[cur.first][cur.second] + magic < cost[i][j]) {
                    cost[i][j] = cost[cur.first][cur.second] + magic;
                    if(magic == 0) {
                        dq.push_front({i, j});
                    } else {
                        dq.push_back({i, j});
                    }
                }
            }
        }
    }

    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cout << cost[i][j] << " ";
        }
        cout << endl;
    }

    if(cost[DH][DW] == 1e7) {
        cout << -1 << endl;
    } else {
        cout << cost[DH][DW] << endl;
    }
}