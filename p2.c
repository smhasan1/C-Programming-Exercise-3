#include<stdio.h>

int main(){

	int width, height, j, i;
	char var;
	
	scanf("%d %d %c", &width, &height, &var);

	for(i = 0; i < width; i++){
	printf("%c",var);
	}
	printf("\n");

	for(j = 2; j < height; j++){

		printf("x");
		for(i = 2; i < width; i++){
		printf(" ");
		}
		printf("x\n");
		
	}

	if(height < 2){
	return 0;
	}

	for(i = 0; i < width; i++){
	printf("%c",var);
	}

	printf("\n");

}
