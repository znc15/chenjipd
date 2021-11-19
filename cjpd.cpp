#include <stdio.h>
#include <stdlib.h>
int main()
{
	int score;
	char grade;
	printf ("请输入成绩: \n");
    scanf("%d",&score);
	if (90<=score && score<=100){ //使用判断语句选择ABCD
		printf("成绩优秀A \n");
	}
	else if (75<=score && score<=90){
		printf ("成绩良好B \n");
	}
	else if (60<=score && score<=75){
		printf ("成绩及格C \n");
	}
	else if (40<score && score<=60){
		printf ("成绩不及格D \n");
	}
	return 0;
}
