#include<stdio.h>
#include<math.h>

int main(){

	int i, j = 0, lines, input, x = -1, count[50], space;

	scanf("%d", &lines);
	
	input = lines;

	for(i = 0; lines > 0; i++){

		count[i] = lines;
		lines = lines - 2;
		x++;
//printf("%d\n",count[i]);
//printf("x is%d\n",x);

	}

	while(x >= 0){
		
		space = x;

		for(j = 0; j < space; j++){
		printf(" ");
		}

		for(j = 0; j < count[x]; j++){
		printf("*");
		}
		printf("\n");
		x--;

	}

}
