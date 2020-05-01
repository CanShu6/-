#include <stdio.h>
int main()
{
	int a[10] = { 0 }, i, b,c;
	int j = 0;
	bool flag = true;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	
	for (i = 1; i < 10; i++)
	{
		b = a[j];
		j++;
		if (a[i] == b)
		{
			flag = false;
			break;
		}
		
	}
	if (flag)
		printf("没有相同元素\n");
	else
		printf("有相同元素\n");
	
	return 0;




}