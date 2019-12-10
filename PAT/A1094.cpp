//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//const int maxn = 110;
//
//struct node {
//	int level;
//	vector<int> child;
//}Node[maxn];
//
//int hashTable[maxn] = { 0 };
//
//
//void BFS(int root) {
//	queue<int> q;
//	q.push(root);
//	Node[root].level = 1;
//	while (!q.empty()) {
//		int front = q.front();
//		q.pop();
//		for (int i = 0;i < Node[front].child.size();i++) {
//			int child = Node[front].child[i];
//			Node[child].level = Node[front].level + 1;
//			q.push(child);
//		}
//		hashTable[Node[front].level + 1] += Node[front].child.size();
//	}
//}
//
//int main() {
//	int n, m, parent, k, child;
//	cin >> n >> m;
//	for (int i = 0;i < m;i++) {
//		cin >> parent >> k;
//		for (int j = 0;j < k;j++) {
//			cin >> child;
//			Node[parent].child.push_back(child);
//		}
//	}
//
//	BFS(1);
//
//	int maxLevel = -1, maxValue = 0; //这里为什么不写排序，因为排完序，level就乱了。
//	for (int i = 1;i < maxn;i++) {
//		if (hashTable[i] > maxValue) {
//			maxValue = hashTable[i];
//			maxLevel = i;
//		}
//	}
//
//	printf("%d %d\n", maxValue, maxLevel);
//	return 0;
//}