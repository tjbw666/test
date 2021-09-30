#include<stdio.h>
//递推
int fbnq(int n)
{
	int a = 1;
	int b = 1;
	int c = a;
	while (n > 2)
	{
		c = a + b;//从第三个数开始，斐波那契数等于前两个数的和；
		a = b;//将前一个数给到a，开始下一次求值
		b = c;//将斐波那契数给b，开始下一次求值
		n--;//每求一次，n都要减一
	}
	return c;
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = fbnq(n);
	printf("第%d个斐波那契数为%d\n", n, ret);
	return 0;
}