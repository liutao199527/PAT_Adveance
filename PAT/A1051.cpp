//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//const int maxn = 1010;
//int arr[maxn];//������Ŀ�еĳ�ջ����
//stack<int> st;  //����ջ�����ڴ��intԪ��
//
//int main() {
//	int m, n, T;
//	cin >> m >> n >> T;
//	while (T--) {
//		while (!st.empty()) {
//			st.pop();   //��ʼ��ջ
//		}
//
//		for (int i = 1;i <= n;i++) {
//			cin >> arr[i];
//		}
//
//		int current = 1; //ָ���ջ�����д���ջ��Ԫ��
//		bool flag = true;
//		for (int i = 1;i <= n;i++) {
//			st.push(i);//ÿѹ��һ��Ԫ�أ�����Ҫ�ж����Ԫ���Ƿ��Ǵ���ջ��Ԫ��
//			if (st.size() > m) { //�����ʱջ��Ԫ�صĸ�����������m�������зǷ�
//				flag = false;
//				break;
//			}
//			while (!st.empty() && st.top() == arr[current]) {
//				st.pop(); 
//				current++;
//			}
//		}
//
//		if (st.empty() == true && flag == true) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//}