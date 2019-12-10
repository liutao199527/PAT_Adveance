//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//int father[N]; //存放父亲结点
//int isRoot[N] = { 0 };//存放每个结点是否是某个集合的根节点
//int course[N] = { 0 };//存放任意一个喜欢活动H的编号
//
//int findFather(int x) {
//	if (x == father[x]) return x;
//	else {
//		int F = findFather(father[x]);
//		father[x] = F;
//		return F;
//	}
//}
//
//void Union(int a, int b) {
//	int faA = findFather(a);
//	int faB = findFather(b);
//	if (faA != faB) {
//		father[faA] = faB;
//	}
//}
//
//void init(int n) {
//	for (int i = 1;i <= n;i++) {
//		father[i] = i;
//		isRoot[i] = false;
//	}
//}
//
//bool cmp(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	int n, k, h;
//	cin >> n;
//	init(n);
//	for (int i = 1;i <= n;i++) {
//		scanf_s("%d:", &k);
//		for (int j = 0;j < k;j++) {
//			cin >> h;
//			if (course[h] == 0) {
//				course[h] = i;
//			}
//
//			Union(i, findFather(course[h]));
//		}
//	}
//
//	for (int i = 1;i <= n;i++) {
//		isRoot[findFather(i)]++;
//	}
//
//	int ans = 0; //记录集合数目
//	for (int i = 1;i <= n; i++) {
//		if (isRoot[i] != 0) {
//			ans++;
//		}
//	}
//
//	printf("%d\n", ans);
//	sort(isRoot + 1, isRoot + n + 1, cmp);
//	for (int i = 1;i <= ans;i++) {
//		printf("%d", isRoot[i]);
//		if (i < ans) printf(" ");
//	}
//
//	return 0;
//}