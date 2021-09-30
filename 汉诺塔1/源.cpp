#include<iostream>
using namespace std;
int n;
void move(char x, char y)
{
	cout << x << "-->" << y << endl;
}
void hanoi(int n, char A, char B, char C)
{	//将n个盘子从A座借助B座移动到C座 
	if (n == 1)
		move(A, C);
	else
	{
		hanoi(n - 1, A, C, B);
		move(A, C);
		hanoi(n - 1, B, A, C);
	}
}
int main()
{
	cout << "请输入盘子数目: " << endl;
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
	return 0;
}