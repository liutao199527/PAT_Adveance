//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//const int maxn = 100010;
//int coins[maxn];
//
//int N, M;
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0;i < N;i++) {
//		cin >> coins[i];
//	}
//	sort(coins, coins + N);
//	int i = 0, j = N - 1;
//	bool flag = false;
//	while (i < j) {
//		if (coins[i] + coins[j] == M) {
//			printf("%d %d", coins[i], coins[j]);
//			flag = true;
//			break;
//		}
//		else if (coins[i] + coins[j] < M) {
//			i++;
//		}
//		else {
//			j--;
//		}
//	}
//	if (!flag) {
//		printf("No Solution");
//	}
//
//	return 0;
//
//}