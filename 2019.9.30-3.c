#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*��ŵ��
void move(char poss1,char poss2)
{
	printf("%c->%c\n",poss1,poss2);
}
void Hannuota(char poss1, char poss2, char poss3, int n)
{
	if (n == 1)
	{
		move(poss1, poss3);
	}
	else
	{
		Hannuota(poss1, poss3, poss2, n - 1);
		move(poss1, poss3);
		Hannuota(poss2, poss1, poss3, n - 1);
	}
}
int main()
{
	Hannuota('A', 'B', 'C', 6);
	return 0;
}
*/

/*��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
int Fun(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return n*Fun(n, k - 1);
	}
}
int main()
{
	int ret = Fun(2, 5);
	printf("%d\n", ret);
}
*/

/*��ӡһ������ÿһλ������1234����ӡ1 2 3 4
void Print_one(int n)
{
	if (n > 9)
	{
		 Print_one(n / 10);
	}
	printf("%d ",n%10);
	
}
int main()
{
	Print_one(1234);
	return 0;
}
*/
/*дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
int DigitSum(int n)
{
	if (n > 9)
	{
		return n % 10 + DigitSum(n/10);
	}
	else
	{
		return n;
	}
}
int main()
{
	int ret = DigitSum(1279);
	printf("%d\n", ret);
	return 0;
}
*/

/* ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
ʵ�֣��������ַ����е��ַ��������С� 
Ҫ�󣺲���ʹ��C�������е��ַ������������� 

int My_strlen(char *string)
{
	if (*string != '\0')
	{
		return 1 + My_strlen( string+1);
	}
	else
	{
		return 0;
	}
}
void reverse_string(char * string)
{
	int len = My_strlen(string);
	char tmp = *string;
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	if (My_strlen(string + 1) >= 2)
	{
		reverse_string(string+1);
	}
	*(string + len - 1) = tmp;
}
int main()
{
	char str[] = "hello world";
	int ret = My_strlen(str);
	printf("%d\n", ret);
	reverse_string(str);
	printf("%s\n", str);
	return 0;
}
*/

/*ð�ݷ�����
void MaoPao(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
*/

/*ѡ������
void Select(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i]>arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
*/

/*ֱ�Ӳ��뷨����
void Insert(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 1; i < len; i++)
	{
		tmp = arr[i];
		for (j = i - 1;; j--)
		{
			if (arr[j]>tmp)
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				arr[j + 1] = tmp;
				break;
			}
		}
	}
}
*/
