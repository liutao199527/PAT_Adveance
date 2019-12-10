//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//struct node {
//	int x, y, z;
//}Node;
//
//int n, m, slice, T;//矩阵为n*m,共有slice层，T为卒中核心区中1的个数的下限
//
//int pixel[1290][130][61];//三维01矩阵
//bool inq[1290][130][61] = { false }; //记录位置(x,y,z)是否入过队
//
//int X[6] = { 0,0,0,0,1,-1 };
//int Y[6] = { 0,0,1,-1,0,0 };
//int Z[6] = { 1,-1,0,0,0,0 };
//
//bool judge(int x, int y, int z) { //判断坐标(x,y,z)是否需要访问
//	//越界返回false
//	if (x >= n || x < 0 || y >= m || y < 0 || z >= slice || z < 0) return false;
//	//若当前位置为0或(x,y,z)已入过队，则返回fasle
//	if (pixel[x][y][z] == 0 || inq[x][y][z] == true) return false;
//	//以上都不满足，返回true
//	return true;
//}
////BFS函数访问位置(x,y,z)所在的块，将该块中所有的”1“的inq都设置为true
//int BFS(int x, int y, int z) {
//	int tot = 0;    //计数当前块中的1的个数
//	queue<node> Q;  //定义队列
//	Node.x = x, Node.y = y, Node.z = z;
//	Q.push(Node); //将节点Node入队
//	inq[x][y][z] = true;
//	while (!Q.empty()) {
//		node top = Q.front(); //取出队首元素
//		Q.pop(); //队首元素出队
//		tot++; //当前块中1的个数加1
//		for (int i = 0;i < 6;i++) {
//			int newX = top.x + X[i];
//			int newY = top.y + Y[i];
//			int newZ = top.z + Z[i];
//			if (judge(newX, newY, newZ)) {
//				//新位置（newX,newY,newZ)需要访问
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