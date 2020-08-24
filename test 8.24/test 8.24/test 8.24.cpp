#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//int change(int* px)
//{
//	int y = 8;
//	y = y - *px;
//	px = &y;
//	return 0;
//}
//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("%d", fun(2019));
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	//printf("%s", arr);
//	int xx = 3;
//	int* py = &xx;
//	change(py);
//	//printf("%d", *py);
//	int a = 4, b = 3, * p, * q, * w;
//	p = &a;
//	q = &b;
//	w = q;
//	q = NULL;
//	return 0;
//}
unsigned long g_ulglobal = 0;
void globalinit(unsigned long ularg)
{
	ularg = 0x01;
	return;
}
void test()
{
	globalinit(g_ulglobal);
	printf("%lu", g_ulglobal);
	return;
}
int main()
{
	test();
}