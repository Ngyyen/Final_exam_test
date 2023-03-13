#include <iostream>
using namespace std;

void xuat_chinh_phuong(int, int);

int main()
{
	int a, b;
	cin >> a >> b;
	xuat_chinh_phuong(a, b);
	return 0;
}

void xuat_chinh_phuong(int a, int b)
{
	for (unsigned long long i = 1; i*i <= b; ++i) {
		unsigned long long x = i * i;
		if (x<=b && x>=a) {
			cout << x << " ";
		}
	}
}