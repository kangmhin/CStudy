#include <stdio.h>
main(){
	/*int m = 0;
	while(m<=5){
		printf("%d\n", m++);
	}
	printf("\n루프종료");
	
	int i = 30;
	while(i>=10){
	printf("%d\n", i);
	i-=2;
	}
	printf("루프종료");*/
	
	int i=1, sum=0;
	while(i<=10){
		sum += i++;
		
		
	}
	printf("1부터 10까지의 합 : %d", sum);
}

