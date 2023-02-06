#include<stdio.h>
#include<iostream>

using namespace std;

void print(int a, int c) {
	cout << a << " " << c << "\n";
}

void hanoi(int n, int a, int b, int c) {
	if (n == 1) {
		print(a, c);
	}
	else {
		hanoi(n - 1, a, c, b);
		print(a, c);
		hanoi(n - 1, b, a, c);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, a = 1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		a *= 2;
	}
	cout << a - 1 << "\n";
	hanoi(N, 1, 2, 3);

}