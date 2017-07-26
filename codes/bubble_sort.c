/*
* 冒泡排序的例子 
*/ 

#include <stdio.h>
struct student{
	char name[20];
	int score;
};

int main(){
	struct student a[100], t;
	int i, j, n;
	
	printf("输入排序学生数: "); 
	scanf("%d", &n);	
	
	printf("依次输入学生名字和分数：name score\n");
	
	for(i = 1; i <= n; i++)
		scanf("%s %d", a[i].name, &a[i].score);
		
	// 冒泡排序
	for(i = 1; i <= n- 1; i++){
		for(j = 1; j <= n - i; j++){
			if(a[j].score < a[j+1].score){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	} 
	
	// 按照分数高低输出人名
	for(i = 1; i <= n; i++)
		printf("%s\n", a[i].name);
		 
	return 0;
} 
