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
//	int np, ng, order;//np表示老鼠的数量，ng表示每组最多多少人
//	cin >> np >> ng;
//	for (int i = 0;i < np;i++) {
//		cin >> mouse[i].weight;
//	}
//
//	queue<int> q;//定义一个队列，存储参与老鼠的顺序
//	for (int i = 0;i < np;i++) {
//		cin >> order;
//		q.push(order);//按顺序把老鼠们的标号入队
//	}
//
//	int temp = np, group;//temp为当前轮的比赛总老鼠数,group为组数
//	while (q.size() != 1) {
//		if (temp % ng == 0) group = temp / ng;
//		else group = temp / ng + 1;
//
//		//枚举每一组。选出改组老鼠中质量最大的
//		for (int i = 0;i < group;i++) {
//			int k = q.front();//k存放改组质量最大的老鼠的编号
//			for (int j = 0;j < ng;j++) {
//				//在最后一组老鼠数不足NG时起作用，退出循环
//				if (i * ng + j >= temp) break;
//				int front = q.front();//队首老鼠的编号
//				if (mouse[front].weight > mouse[k].weight) {
//					k = front;
//				}
//				mouse[front].R = group + 1;//该轮老师的排名为group+1,晋级的老鼠，在下一轮的排名会更新
//				q.pop(); //出队这支老鼠
//			}
//			q.push(k);//将胜利的老鼠入队
//		}
//		temp = group;//group只老鼠晋级，因此下轮的总老鼠的数目为group
//	}
//
//	mouse[q.front()].R = 1; //当队列只有一只老鼠时，令其排名为1
//
//	//输出所有老鼠的信息
//	for (int i = 0;i < np;i++) {
//		printf("%d", mouse[i].R);
//		if (i < np - 1) printf(" ");
//	}
//
//	return 0;
//}