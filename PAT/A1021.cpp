//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//const int maxv = 10010;
//vector<int> G[maxv];
//bool vis[maxv] = { false };
//int maxDepth = 0,n,block=0;
//set<int> temp;
//
//void DFS(int v,int depth) {
//	vis[v] = true;
//	if (depth > maxDepth) {
//		temp.clear();
//		temp.insert(v);
//		maxDepth = depth;
//	}
//	else if (depth == maxDepth) {
//		temp.insert(v);
//	}
//	for (int i = 0;i < G[v].size();i++) {
//		if (vis[G[v][i]] == false) {
//			DFS(G[v][i], depth + 1);
//		}
//	}
//}
//
//void DFSTrave() {
//	for (int i = 1;i <= n;i++) {
//		if (vis[i] == false) {
//			DFS(i, 1);
//			block++;
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1;i < n;i++) {
//		int a, b;
//		cin >> a >> b;
//		G[a].push_back(b);
//		G[b].push_back(a);
//	}
//
//	DFSTrave();
//	temp.clear();
//	for (int i = 1;i <= n;i++) {
//		fill(vis, vis + maxv, false);
//		DFS(i, 1);
//	}
//	if (block == 1) {
//		for (set<int>::iterator it = temp.begin();it != temp.end();it++) {
//			printf("%d\n", *it);
//		}
//	}
//	else {
//		printf("Error:%d components\n", block);
//	}
//
//	return 0;
//}