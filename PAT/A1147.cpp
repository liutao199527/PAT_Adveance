//#include<iostream>
//
//using namespace std;
//const int maxv = 1010;
//
//int N, M;
//
//int heap[maxv];
//
//void isHeap() {
//	bool flag1 = true, flag2 = true;
//	for (int i = 1;i <= M;i++) {
//		if (2 * i <= M) {
//			if (heap[i] > heap[2 * i]) {
//				flag2 = false;
//			}
//			else if(heap[i] < heap[2 * i]){
//				flag1 = false;
//			}
//		}
//		if (2 * i + 1 <= M) {
//			if (heap[i] > heap[2 * i]) {
//				flag2 = false;
//			}
//			else if (heap[i] < heap[2 * i]) {
//				flag1 = false;
//			}
//		}
//	}
//	if (flag1) {
//		printf("Max Heap\n");
//	}
//	if (flag2) {
//		printf("Min Heap\n");
//	}
//	if (flag1 == false && flag2 == false) {
//		printf("Not Heap\n");
//	}
//}
//
//int num;
//void postOrder(int root) {
//	if (heap[root] == -1) {
//		return;
//	}
//
//	postOrder(2 * root);
//	postOrder(2 * root + 1);
//	printf("%d", heap[root]);
//	num++;
//	if (num < M) {
//		printf(" ");
//	}
//	else {
//		printf("\n");
//	}
//}
//int main() {
//	cin >> N >> M;
//	fill(heap, heap + maxv, -1);
//	for (int i = 0;i < N;i++) {
//		num = 0;
//		for (int j = 1;j <= M;j++) {
//			cin >> heap[j];
//		}
//		isHeap();
//		postOrder(1);
//	}
//
//	return 0;
//}