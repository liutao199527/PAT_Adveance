//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//struct node {
//	int x, y, z;
//}Node;
//
//int n, m, slice, T;//����Ϊn*m,����slice�㣬TΪ���к�������1�ĸ���������
//
//int pixel[1290][130][61];//��ά01����
//bool inq[1290][130][61] = { false }; //��¼λ��(x,y,z)�Ƿ������
//
//int X[6] = { 0,0,0,0,1,-1 };
//int Y[6] = { 0,0,1,-1,0,0 };
//int Z[6] = { 1,-1,0,0,0,0 };
//
//bool judge(int x, int y, int z) { //�ж�����(x,y,z)�Ƿ���Ҫ����
//	//Խ�緵��false
//	if (x >= n || x < 0 || y >= m || y < 0 || z >= slice || z < 0) return false;
//	//����ǰλ��Ϊ0��(x,y,z)������ӣ��򷵻�fasle
//	if (pixel[x][y][z] == 0 || inq[x][y][z] == true) return false;
//	//���϶������㣬����true
//	return true;
//}
////BFS��������λ��(x,y,z)���ڵĿ飬���ÿ������еġ�1����inq������Ϊtrue
//int BFS(int x, int y, int z) {
//	int tot = 0;    //������ǰ���е�1�ĸ���
//	queue<node> Q;  //�������
//	Node.x = x, Node.y = y, Node.z = z;
//	Q.push(Node); //���ڵ�Node���
//	inq[x][y][z] = true;
//	while (!Q.empty()) {
//		node top = Q.front(); //ȡ������Ԫ��
//		Q.pop(); //����Ԫ�س���
//		tot++; //��ǰ����1�ĸ�����1
//		for (int i = 0;i < 6;i++) {
//			int newX = top.x + X[i];
//			int newY = top.y + Y[i];
//			int newZ = top.z + Z[i];
//			if (judge(newX, newY, newZ)) {
//				//��λ�ã�newX,newY,newZ)��Ҫ����
//				Node.x = newX, Node.y = newY, Node.z = newZ;
//				Q.push(Node);
//				inq[newX][newY][newZ] = true;
//			}
//
//		}
//	}
//
//	if (tot >= T) return tot;
//	else return 0;
//}
//
//int main() {
//	cin >> n >> m >> slice >> T;
//	for (int z = 0;z < slice;z++) {
//		for (int x = 0;x < n;x++) {
//			for (int y = 0;y < m;y++) {
//				cin >> pixel[x][y][z];
//			}
//		}
//	}
//
//	int ans = 0;
//	for (int z = 0;z < slice;z++) {
//		for (int x = 0;x < n;x++) {
//			for (int y = 0;y < m;y++) {
//				if (pixel[x][y][z] == 1 && inq[x][y][z] == false) {
//					ans += BFS(x, y, z);
//				}
//			}
//		}
//	}
//
//	printf("%d\n", ans);
//	return 0;
//}