/*
* ������������� 
*/ 

#include <stdio.h>
//#define DEBUG 1

int a[101], n;

/*
* �Ե������������ֵ 
*/
void switch_num(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
* ���������㷨 
*/
void quick_sort(int left, int right){
	int criterion = a[left];
	int i, j, k;
	if(left > right)
		return;
		
	for(j = right, i = left; j > i; j--){
		if(a[j] < criterion) {
			while(i < j){
				if(a[i] > criterion){
					switch_num(&a[i], &a[j]);
					break;
				}
				i++;
			}
		}
	}
	if(j <= i)
	switch_num(&a[left], &a[i]);
#ifdef DEBUG 0	
	// ��������Ľ��
	printf("\ni = %d, j = %d��������:\n",i ,j);
	for(k = 1; k <= n; k++)
		printf("%d ", a[k]);
#endif 	
	quick_sort(left, i - 1);
	quick_sort(i + 1, right);
	return; 
}

int main(){
	int i,j;
	
	printf("��������������ݸ�����");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	
	quick_sort(1, n);
	
	//��������Ľ��
	printf("\n");
	for(i = 1; i <= n; i++)
		printf("%d ", a[i]);
		
	getchar();
	
	return 0; 
} 
