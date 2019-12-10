//#include <iostream>
//#include <vector>
//
//using namespace std;
//const int N = 100010;
//
//int sum[N]; //sum[i]表示1到i的和
//vector<int> ans;
//
//int n, S, nearS = 1000000000;
//int upper_bound(int L, int R, int val) {
//	int Left = L, Right = R, mid;
//	while (Left < Right) {
//		mid = (Left + Right) / 2;
//		if (sum[mid] > val) {
//			Right = mid;
//		}else {
//			Left = mid + 1;
//		}
//	}
//
//	return Left;
//}
//int main() {
//	cin >> n >> S;
//	sum[0] = 0;
//	for (int i = 1;i <= n;i++) {
//		cin >> sum[i];
//		sum[i] += sum[i - 1];
//	}
//
//	for (int i = 1;i <= n;i++) {
//		int j = upper_bound(i,n + 1 , sum[i - 1] + S);
//		if (sum[j-1] - sum[i - 1] == S) {
//			nearS = S;
//			break;
//		}
//		else if (sum[j] - sum[i - 1] < nearS && j <= n) {
//			nearS = sum[j] - sum[i - 1];
//		}
//	}
//
//	for (int i = 1;i <= n;i++) {
//		int j = upper_bound(i, n + 1, sum[i - 1] + nearS);
//		if (sum[j - 1] - sum[i - 1] == nearS) {
//			printf("%d-%d\n", i, j - 1);
//		}
//	}
//
//	return 0;
//}