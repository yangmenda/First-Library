#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	cout << "输入元素个数";
	cin >> n;
	cout << "输入数组元素：" << endl;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	int p = 0, q = 0;
	cin >> p >> q;
	int sum = 0;
	for (int i = p; i < q + 1; ++i)
		sum += a[i];
	cout << sum << endl;
}
