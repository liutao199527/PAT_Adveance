//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int maxn = 100010;
//
//int n, p, a[maxn];
//
//int binarySearch(int i, long long x) {
//	if (a[n - 1] <= x) return n;
//	int L = i + 1, R = n - 1, mid;
//	while (L < R) {
//		mid = (L + R) / 2;
//		if (a[mid] > x) {
//			R = mid;
//		}
//		else {
//			L = mid + 1;
//		}
//	}
//
//	return L;
//}
//
//int main() {
//	cin >> n >> p;
//	for (int i = 0;i < n;i++) {
//		cin >> a[i];
//	}
//
//	sort(a, a + n);
//	int ans = 1;
//	for (int i = 0;i < n;i++) {
//		int j = binarySearch(i, (long long)a[i] * p);
//		ans = max(ans, j - i);
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}
