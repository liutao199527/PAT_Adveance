//#include <iostream>
//#include <queue>
//
//using namespace std;
//const int maxn = 1010;
//struct Mouse {
//	int weight;
//	int R;
//}mouse[maxn];
//
//int main() {
//	int np, ng, order;//np��ʾ�����������ng��ʾÿ����������
//	cin >> np >> ng;
//	for (int i = 0;i < np;i++) {
//		cin >> mouse[i].weight;
//	}
//
//	queue<int> q;//����һ�����У��洢���������˳��
//	for (int i = 0;i < np;i++) {
//		cin >> order;
//		q.push(order);//��˳��������ǵı�����
//	}
//
//	int temp = np, group;//tempΪ��ǰ�ֵı�����������,groupΪ����
//	while (q.size() != 1) {
//		if (temp % ng == 0) group = temp / ng;
//		else group = temp / ng + 1;
//
//		//ö��ÿһ�顣ѡ��������������������
//		for (int i = 0;i < group;i++) {
//			int k = q.front();//k��Ÿ���������������ı��
//			for (int j = 0;j < ng;j++) {
//				//�����һ������������NGʱ�����ã��˳�ѭ��
//				if (i * ng + j >= temp) break;
//				int front = q.front();//��������ı��
//				if (mouse[front].weight > mouse[k].weight) {
//					k = front;
//				}
//				mouse[front].R = group + 1;//������ʦ������Ϊgroup+1,��������������һ�ֵ����������
//				q.pop(); //������֧����
//			}
//			q.push(k);//��ʤ�����������
//		}
//		temp = group;//groupֻ���������������ֵ����������ĿΪgroup
//	}
//
//	mouse[q.front()].R = 1; //������ֻ��һֻ����ʱ����������Ϊ1
//
//	//��������������Ϣ
//	for (int i = 0;i < np;i++) {
//		printf("%d", mouse[i].R);
//		if (i < np - 1) printf(" ");
//	}
//
//	return 0;
//}