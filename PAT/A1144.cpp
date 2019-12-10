//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int maxv = 100010;
//
//int N;
//int a[maxv];
//bool hashTable[maxv];
//
//int main() {
//	cin >> N;
//	int j = 0;
//	fill(hashTable, hashTable + maxv, false);
//	for (int i = 0;i < N;i++) {
//		int temp;
//		cin >> temp;
//		if (temp > 0) {
//			a[j] = temp;
//			j++;
//			hashTable[temp] = true;
//		}
//	}
//	sort(a, a + j);
//	for (int i = 1;i <=j;i++) {
//		if (hashTable[i] == false) {
//			printf("%d", i);
//			return 0;
//		}
//	}
//
//	return 0;
//}