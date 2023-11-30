#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;


    // 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
	for(i=101; i<=200; i++)
	{
		//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
		int j = 0;
		for(j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				break;
			}
		}
        
		// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
		if(j==i)
		{
			count++;
			printf("%d ", i);
		}
	}


	printf("\ncount = %d\n", count);
	return 0;
}
