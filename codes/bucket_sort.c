/*
* Ͱ�������� 
*/

#include <stdio.h>

#define NUM 1001 /* Ͱ����Ŀ */

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
    // ѭ���������� 
	for(i = 1; i <=n ; i++){
		scanf("%d", &t);
		book[t]++; //���� 
	}
    
    printf("Plese input %d numbers.\n", n);
    
    for(i = NUM - 1; i >= 0; i--)
		for(j = 1; j <= book[i]; j++) // ���ּ��ξͽ�Ͱ��Ŵ�ӡ���� 
			printf("%d ", i);
			
			 
	getchar();
	
	return 0;
}
