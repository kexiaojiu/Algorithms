/*
* ð����������� 
*/ 

#include <stdio.h>
struct student{
	char name[20];
	int score;
};

int main(){
	struct student a[100], t;
	int i, j, n;
	
	printf("��������ѧ����: "); 
	scanf("%d", &n);	
	
	printf("��������ѧ�����ֺͷ�����name score\n");
	
	for(i = 1; i <= n; i++)
		scanf("%s %d", a[i].name, &a[i].score);
		
	// ð������
	for(i = 1; i <= n- 1; i++){
		for(j = 1; j <= n - i; j++){
			if(a[j].score < a[j+1].score){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	} 
	
	// ���շ����ߵ��������
	for(i = 1; i <= n; i++)
		printf("%s\n", a[i].name);
		 
	return 0;
} 
