#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
/*��Sn=a+aa+aaa+aaaa+aaaaa��ǰn��֮�ͣ�����a��һ�����֡�������a=3��
int main()
{
	int i = 0;
	int a = 3;
	int b = 0;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		b = b*10+a;
		sum += b;
	}
	printf("%d\n", sum);
	return 0;
}
*/
/*
��ˮ�ɻ���

int main()
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < 100000000; i++)
	{
		int sum = 0;
		int count = 0;
		tmp = i;
		while (tmp)
		{
			count++;
			tmp /= 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += (int)pow((double)(tmp % 10), (double)count);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
*/
//int main()
//{
//	int num = 10;
//	int *p = &num;
//	*p = 20;
//	return 0;
//}