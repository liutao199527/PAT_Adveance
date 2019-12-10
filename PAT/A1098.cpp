//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 111;
//
//int origin[N], tempOri[N], changed[N];//ԭʼ���飬ԭʼ����ı��ݣ�Ŀ������
//int n; //Ԫ�ظ���
//
//bool isSame(int A[], int B[]) {  //�ж���������A������B�Ƿ���ͬ
//	for (int i = 1;i <= n;i++) {
//		if (A[i] != B[i]) return false;
//	}
//
//	return true;
//}
//
//void showArray(int A[]) {  //�������
//	for (int i = 1;i <= n;i++) {
//		printf("%d", A[i]);
//		if (i < n) printf(" ");
//	}
//
//	printf("\n");
//}
//
//bool insertSort() { //��������
//	bool flag = false; //��¼�Ƿ���������м䲽����changed������ͬ
//	for (int i = 2;i <= n;i++) {
//		if (i != 2 && isSame(tempOri, changed)) {
//			flag = true;
//		}
//		
//		//�������򲿷�ֱ����sort����
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
////��heap������[low,high]��Χ���е���
////����lowΪ�������Ľ��������±꣬highһ��Ϊ�ѵ����һ��Ԫ�ص������±�
//void downAdjust(int low, int high) {
//	int i = low, j = i * 2; //iΪ��������㣬jΪ�����ӽ��
//	while (j <= high) { //���ں��ӽ��
//		//����Һ��ӽ����ڣ����Һ��ӽ���ֵ�������ӽ��
//		if (j + 1 <= high && tempOri[j + 1] > tempOri[j]) {
//			j = j + 1; //��j�洢�Һ��ӽ���±ꡣ
//		}
//
//		//������ӽ��������Ȩֵ�ȸ��׽���
//		if (tempOri[j] > tempOri[i]) {
//			swap(tempOri[j], tempOri[i]); //�������Ȩֵ�ĺ��ӽ��͸��׽��
//			i = j; //��iΪj����jΪi�����ӽ�㣬������һ��
//			j = i * 2;
//		}
//		else {
//			break; //���ӽ���Ȩֵ���ȸ��׽��С����������
//		}
//
//	}
//}
//
//bool heapSort() { //������
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
//		downAdjust(1, i - 1); //�����Ѷ�
//		if (flag == true) {
//			showArray(tempOri); //�ѵ���Ŀ�����飬����true
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
//			tempOri[i] = origin[i]; //��ԭtempOri����
//		}
//		heapSort(); //������
//	}
//
//	return 0;
//}