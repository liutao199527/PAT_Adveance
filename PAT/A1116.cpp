//#include <iostream>
//
//using namespace std;
//
//const int maxv = 10010;
//int hashTable[maxv];
//bool vis[maxv];
//
//int N, M;
//bool isPrime(int n) {
//	if (n <= 1)return false;
//	for (int i = 2;i * i <= n;i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//
//	return true;
//}
//int main() {
//	cin >> N;
//	fill(hashTable, hashTable + maxv, -1);
//	fill(vis, vis + maxv, false);
//	for (int i = 1;i <= N;i++) {
//		int temp;
//		cin >> temp;
//		hashTable[temp] = i;
//	}
//	cin >> M;
//	for (int i = 0;i < M;i++) {
//		int temp;
//		cin >> temp;
//		if (vis[temp] == true) {
//			printf("%04d: Checked\n", temp);
//		}
//		else {
//			if (hashTable[temp] == 1) {
//				printf("%04d: Mystery Award\n", temp);
//				vis[temp] = true;
//			}
//			else if (hashTable[temp] == -1) {
//				printf("%04d: Are you kidding?\n", temp);
//			}
//			else {
//				vis[temp] = true;
//				if (isPrime(hashTable[temp])) {
//					printf("%04d: Minion\n", temp);
//				}
//				else {
//					printf("%04d: Chocolate\n", temp);
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//
