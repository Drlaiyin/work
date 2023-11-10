#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >res; // 存储所有符合要求的皇后串

// 判断当前位置是否可以放置皇后
bool isValid(vector<int>& path, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (path[i] == col || abs(path[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// 回溯求解所有符合要求的皇后串
void backtrack(vector<int>& path, int n) {
    if (path.size() == n) {
        res.push_back(path);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!isValid(path, path.size(), i)) {
            continue;
        }
        path.push_back(i);
        backtrack(path, n);
        path.pop_back();
    }
}

// 输出第b个皇后串
void printQueen(int b) {
    vector<int> path;
    backtrack(path, 8);
    for (int i = 0; i < 8; i++) {
        cout << res[b - 1][i] + 1;
    }
    cout<<endl;
}

int main() {
    int b;
    cin >> b;
    int d[b];
    for(int i=0;i<b;i++)
    {
    	cin>>d[i];
    	
	}
	for(int i=0;i<b;i++)
    	printQueen(d[i]);
    return 0;
}
