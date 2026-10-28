#define _CRT_SECURE_NO_WARNINGS
//¼Ä°ü¹ñ
//https://www.luogu.com.cn/problem/P3613

#include<iostream>
#include<vector>
using namespace std;
const int N = 1e5+10;
int n = 0;
int q = 0;
vector<vector<int>> v(N);

int main()
{	
	cin >> n >> q;
	int op = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	while (q--)
	{
		cin >> op >> i >> j;
		if (op == 1)
		{
			cin >> k;
			if (v[i].size() < j)
			{
				v[i].resize(j + 1);
			}
			v[i][j - 1] = k;
		}
		else
		{
			cout << v[i][j - 1] << endl;
		}
	}
	return 0;
}