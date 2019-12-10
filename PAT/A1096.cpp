#include<iostream>
#include<cmath>

using namespace std;
const int maxn = 100000;

struct factor {
	int x;
	int cnt;
}fac[10];

int N;
int prime[maxn];
int pnum=0;
bool p[maxn];

int main() {
	fill(p, p + maxn, false);
	cin >> N;
	for (int i = 2;i < N;i++) {
		if (p[i] == false) {
			prime[pnum++] = i;
		}
		for (int j = i;j< N;j += i) {
			p[j] = true;
		}
	}
	int num = 0;
	for (int i = 0;i < pnum;i++) {
		if (prime[i] <= sqrt(N)) {
			if (N % prime[i] == 0) {
				fac[num].x = prime[i];
				fac[num].cnt = 0;
				while (N % prime[i] == 0) {
					fac[num].cnt++;
					N /= prime[i];
				}
				num++;
			}
		}
		else {
			break;
		}
	}
	if (N != 1) {
		fac[num].x = N;
		fac[num].cnt = 1;
		num++;
	}

	printf("%d\n", num);
	for (int i = 0;i < num;i++) {
		if (i != num - 1) {
			for (int j = 0;j < fac[i].cnt;j++) {
				printf("%d*", fac[i].x);
			}
		}
		else {
			for (int j = 0;j < fac[i].cnt;j++) {
				if (j != fac[i].cnt - 1) {
					printf("%d*", fac[i].x);
				}
				else {
					printf("%d", fac[i].x);
				}
			}
		}
	}

	return 0;
}