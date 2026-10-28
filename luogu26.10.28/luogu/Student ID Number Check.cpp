#define _CRT_SECURE_NO_WARNINGS
//Ñ¯ÎÊÑ§ºÅ
//https://www.luogu.com.cn/problem/P3156#submit
#include<iostream>
#include<vector>
using namespace std;

const int N = 2e6 + 10;
int n = 0;
int m = 3;
int k = 0;
vector<int> v(N);

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> v[i];
	}
	while (m--)
	{
		cin >> k;
		cout << v[k]<<endl;
	}
	return 0;
}