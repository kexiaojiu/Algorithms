/*
* 桶排序例子 
*/

#include <stdio.h>

#define NUM 1001 /* 桶的数目 */

int main()
{
//	int a[11] ={0}, i, j ,t;
//	
////	for(i = 0; i <= 10; i++)
////		a[i] = 0;
//	
//	for(i = 1; i <= 5; i++){
//		scanf("%d", &t);
//		a[t]++;
//	}
//	
//	for(i = 10; i >= 0; i--)
//		for(j = 1 ; j <= a[i]; j++)
//			printf("%d ", i);
//			
	int book[NUM] = {0};
	int i, j, t, n;
    
    printf("Please input the number to sort: \n");
    scanf("%d", &n);
    // 循环读入数据 
	for(i = 1; i <=n ; i++){
		scanf("%d", &t);
		book[t]++; //计数 
	}
    
    printf("Plese input %d numbers.\n", n);
    
    for(i = NUM - 1; i >= 0; i--)
		for(j = 1; j <= book[i]; j++) // 出现几次就将桶编号打印几次 
			printf("%d ", i);
			
			 
	getchar();
	
	return 0;
}
