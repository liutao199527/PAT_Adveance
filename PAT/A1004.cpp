//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//const int maxn = 110;
//vector<int> node[maxn];
//
//int n, m;
//int hashTable[maxn] = { 0 };
//int maxDepth = 0;
//
//void DFS(int root, int depth) {
//	if (node[root].size() == 0) {
//		hashTable[depth]++;
//		if (depth > maxDepth) {
//			maxDepth = depth;
//		}
//		return;
//	}
//
//	for (int i = 0;i < node[root].size();i++) {
//		DFS(node[root][i], depth + 1);
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	int father, k, child;
//	for (int i = 0;i < m;i++) {
//		cin >> father >> k;
//		for (int j = 0;j < k;j++) {
//			cin >> child;
//			node[father].push_back(child);
//		}
//	}
//
//	DFS(1, 0);
//	for (int i = 0;i <= maxDepth;i++) {
//		printf("%d", hashTable[i]);
//		if (i < maxDepth) printf(" ");
//	}
//
//	return 0;
//}