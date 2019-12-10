//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 111;
//
//int origin[N], tempOri[N], changed[N];//原始数组，原始数组的备份，目标数组
//int n; //元素个数
//
//bool isSame(int A[], int B[]) {  //判断两个数组A和数组B是否相同
//	for (int i = 1;i <= n;i++) {
//		if (A[i] != B[i]) return false;
//	}
//
//	return true;
//}
//
//void showArray(int A[]) {  //输出数组
//	for (int i = 1;i <= n;i++) {
//		printf("%d", A[i]);
//		if (i < n) printf(" ");
//	}
//
//	printf("\n");
//}
//
//bool insertSort() { //插入排序
//	bool flag = false; //记录是否存在数组中间步骤与changed数组相同
//	for (int i = 2;i <= n;i++) {
//		if (i != 2 && isSame(tempOri, changed)) {
//			flag = true;
//		}
//		
//		//插入排序部分直接用sort代替
//		sort(tempOri + 1, tempOri + i + 1);
//		if (flag == true) {
//			return true;
//		}
//	}
//	
//	return false;
//}
//
//
////对heap数组在[low,high]范围进行调整
////其中low为欲调整的结点的数组下标，high一般为堆的最后一个元素的数组下标
//void downAdjust(int low, int high) {
//	int i = low, j = i * 2; //i为欲调整结点，j为其左孩子结点
//	while (j <= high) { //存在孩子结点
//		//如果右孩子结点存在，且右孩子结点的值大于左孩子结点
//		if (j + 1 <= high && tempOri[j + 1] > tempOri[j]) {
//			j = j + 1; //让j存储右孩子结点下标。
//		}
//
//		//如果孩子结点中最大的权值比父亲结点大
//		if (tempOri[j] > tempOri[i]) {
//			swap(tempOri[j], tempOri[i]); //交换最大权值的孩子结点和父亲结点
//			i = j; //令i为j，令j为i的左孩子结点，进入下一层
//			j = i * 2;
//		}
//		else {
//			break; //孩子结点的权值均比父亲结点小，调整结束
//		}
//
//	}
//}
//
//bool heapSort() { //堆排序
//	bool flag = false;
//	for (int i = n / 2;i >= 1;i--) {
//		downAdjust(i, n);
//	}
//	for (int i = n;i > 1;i--) {
//		if (i != n && isSame(tempOri, changed)) {
//			flag = true;
//		}
//
//		swap(tempOri[i], tempOri[1]);
//		downAdjust(1, i - 1); //调整堆顶
//		if (flag == true) {
//			showArray(tempOri); //已到达目标数组，返回true
//			return true;
//		}
//	}
//
//	return false;
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1;i <= n;i++) {
//		cin >> origin[i];
//		tempOri[i] = origin[i];
//	}
//
//	for (int i = 1;i <= n;i++) {
//		cin >> changed[i];
//	}
//
//	if (insertSort()) {
//		printf("Insertion Sort\n");
//		showArray(tempOri);
//	}
//	else {
//		printf("Heap Sort\n");
//		for (int i = 1;i <= n;i++) {
//			tempOri[i] = origin[i]; //还原tempOri数组
//		}
//		heapSort(); //堆排序
//	}
//
//	return 0;
//}