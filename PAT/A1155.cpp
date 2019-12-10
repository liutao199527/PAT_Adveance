//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//const int maxv = 1010;
//vector<int> v;
//int N;//结点数目
//int tree[maxv];
//bool maxHeap = true;
//bool minHeap = true;
//
//void isMaxHeap(int root) {
//	if (2*root > N) {
//		return;
//	}
//	if (root * 2 + 1 <= N) {
//		int max_value = max(tree[root * 2], tree[root * 2 + 1]);
//		if (tree[root] < max_value) {
//			maxHeap = false;
//		}
//	}
//	else {
//		if (tree[root] < tree[root*2]) {
//			maxHeap = false;
//		}
//	}
//
//	isMaxHeap(root * 2);
//	isMaxHeap(root * 2 + 1);
//}
//
//void isMinHeap(int root) {
//	if (2 * root > N) {
//		return;
//	}
//	if (root * 2 + 1 <= N) {
//		int min_value = min(tree[root * 2], tree[root * 2 + 1]);
//		if (tree[root] > min_value) {
//			minHeap = false;
//		}
//	}
//	else {
//		if (tree[root] > tree[root * 2]) {
//			minHeap = false;
//		}
//	}
//
//	isMinHeap(root * 2);
//	isMinHeap(root * 2 + 1);
//}
//void DFS(int index) { 
//	if (index * 2 > N && index * 2 + 1 > N) { 
//		if (index <= N) { 
//			for (int i = 0; i < v.size(); i++)                
//				printf("%d%s", v[i], i != v.size() - 1 ? " " : "\n"); 
//		} 
//	} 
//	else {
//		v.push_back(tree[index * 2 + 1]);        
//		DFS(index * 2 + 1);        
//		v.pop_back();        
//		v.push_back(tree[index * 2]);        
//		DFS(index * 2);        
//		v.pop_back(); 
//	} 
//}
//
//int main() {
//	cin >> N;
//	for (int i = 1;i <= N;i++) {
//		cin >> tree[i];
//	}
//	v.push_back(tree[1]);
//	DFS(1);
//	isMaxHeap(1);
//	isMinHeap(1);
//	if (maxHeap) {
//		printf("Max Heap");
//	}else if (minHeap) {
//		printf("Min Heap");
//	}
//	else {
//		printf("Not Heap");
//	}
//
//	return 0;
//}