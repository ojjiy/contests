#include<iostream>
#include<vector>
using namespace std;


int main() {
	int L, N, M;
	cin >> L >> N >> M;
	vector<int> R(N), P(N), A(M), B(M), C(M), D(M);
	for (int i = 0; i < N; i++)
	{
		cin >> R[i] >> P[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> A[i] >> B[i] >> C[i] >> D[i];
		A[i]--; B[i]--;
	}

	int bestPair = 0;
	long long bestPoint = 0;
	for (int i = 0; i < N; i++)
	{
		long long pt = P[A[i]] + P[B[i]] + C[i];
		if (pt > bestPoint) {
			bestPair = i;
			bestPoint = pt;
		}
	}

	vector<int> X(N, -1), Y(N, -1), Z(N, -1);

	int Left = A[bestPair];
	int Right = B[bestPair];

	X[Left] = 500 - R[Left];
	Y[Left] = 500;
	Z[Left] = 500;

	X[Right] = 500 + R[Right];
	Y[Right] = 500;
	Z[Right] = 500;


	for (int i = 0; i < N; i++)
	{
		cout << X[i] << " " << Y[i] << " " << Z[i] << endl;
	}
}
