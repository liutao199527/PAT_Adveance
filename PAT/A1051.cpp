//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//const int maxn = 1010;
//int arr[maxn];//保存题目中的出栈序列
//stack<int> st;  //定义栈，用于存放int元素
//
//int main() {
//	int m, n, T;
//	cin >> m >> n >> T;
//	while (T--) {
//		while (!st.empty()) {
//			st.pop();   //初始化栈
//		}
//
//		for (int i = 1;i <= n;i++) {
//			cin >> arr[i];
//		}
//
//		int current = 1; //指向出栈序列中待出栈的元素
//		bool flag = true;
//		for (int i = 1;i <= n;i++) {
//			st.push(i);//每压入一个元素，就需要判断这个元素是否是待出栈的元素
//			if (st.size() > m) { //如果此时栈中元素的个数大于容量m，则序列非法
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
