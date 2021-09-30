#include<iostream>
using namespace std;
int n;
void move(char x, char y)
{
	cout << x << "-->" << y << endl;
}
void hanoi(int n, char A, char B, char C)
{	//��n�����Ӵ�A������B���ƶ���C�� 
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
	cout << "������������Ŀ: " << endl;
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
	return 0;
}