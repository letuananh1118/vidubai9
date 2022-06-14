#include<stdio.h>
void main()
{
	int min,max,count;
	printf("min= ");
	scanf("%d",&min);
	printf("max= ");
	scanf("%d",&max);
	for(count=min;count<=max;count++)
	{
		if (count %2 ==0)
		printf("%d\n",count);
	}
	
}
