//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int maxv = 210;
//const int INF = 1000000000;
//vector<int> v;
//
//int G[maxv][maxv];
//
//int N, M;
//int min_dis = INF;
//int min_index = -1;
//
//bool cmp(int a, int b) {
//	return a > b;
//}
//void check(vector<int> v, int index) {
//	int totaldist = 0;
//	int hashTable[maxv] = { 0 };
//	int st = v[0];
//	for (int i = 0;i < v.size() - 1;i++) {
//		if (G[v[i]][v[i + 1]] < INF) {
//			totaldist += G[v[i]][v[i + 1]];
//			hashTable[v[i]]++;
//		}
//		else {
//			printf("Path %d: NA (Not a TS cycle)\n", index);
//			return;
//		}
//	}
//	hashTable[v[v.size() - 1]]++;
//
//	bool flag1 = false, flag2 = false;
//	for (int i = 1;i <= N;i++) {
//		if (hashTable[i] == 0) {
//			flag1 = true; //存在结点没有访问到
//		}
//		else if (hashTable[i] > 1 && i != st) {
//			flag2 = true;
//		}
//	}
//	if (v[0] != v[v.size() - 1]) {
//		printf("Path %d: %d (Not a TS cycle)\n", index, totaldist);
//	}
//	else if (flag1 == true) {
//		printf("Path %d: %d (Not a TS cycle)\n", index, totaldist);
//	}
//	else if (flag2 == true) {
//		printf("Path %d: %d (TS cycle)\n", index, totaldist);
//		if (totaldist < min_dis) {
//			min_dis = totaldist;
//			min_index = index;
//		}
//	}
//	else {
//		printf("Path %d: %d (TS simple cycle)\n", index, totaldist);
//		if (totaldist < min_dis) {
//			min_dis = totaldist;
//			min_index = index;
//		}
//	}
//}
//int main() {
//	cin >> N >> M;
//	fill(G[0], G[0] + maxv * maxv, INF);
//	for (int i = 0;i < M;i++) {
//		int u, v, dist;
//		cin >> u >> v >> dist;
//		G[u][v] = G[v][u] = dist;
//	}
//	int K;
//	cin >> K;
//	for (int i = 0;i < K;i++) {
//		v.clear();
//		int n, a;
//		cin >> n;
//		for (int j = 0;j < n;j++) {
//			cin >> a;
//			v.push_back(a);
//		}
//		check(v, i + 1);
//	}
//	printf("Shortest Dist(%d) = %d", min_index, min_dis);
//
//	return 0;
//}