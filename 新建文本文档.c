/ void reverse_arr(char* p)
//{
//	assert(p);
//	int left = 0;
//	int right = strlen(p) - 1;
//	while (left <= right)
//	{
//		char temp = p[left];
//		p[left] = p[right];
//		p[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[10] = { 0 };  // �ڴ�������ǰҪ����ռ䣬��Ȼ��ջ�ٻ�
//	gets(arr);//scanf("%s", arr);  gets ��ȡһ�У������Ŀո�
//	//int ret = strlen(arr);
//	reverse_arr(arr);
//	printf("%s", arr);
//	return 0;
//}
//int add_a(int a)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		sum += a;
//		a = a * 10 + a%10;
//		
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int a = 2;
//	//scanf("%d", &a);
//	add_a(a);
//	printf("%d", add_a(a));
//	return 0;
//}
#include <math.h>


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10000; i++)
//	{   //1.����λ��
//		int temp = i;
//		int n = 1;
//		int sum = 0;
//		while (temp/=10)
//		{
//			n++;
//		}
//		// 2. ����ÿһλ��n�η���
//		temp = i;
//		while (temp )
//		{
//			sum += (int)pow(temp % 10, n);
//			temp /= 10;
//		}
//		//3.�ж�sum��i �Ƿ����
//		if (sum == i)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < num-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(num-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}