#include<stdio.h>
#include<string.h>

int main(){

	FILE *file;
	int i = 0, j = 0, last;
	char matrix[99999][22];

	memset(matrix, 0, sizeof matrix);

	file = fopen("input.txt", "r");

	while(1){
	
		if((matrix[j][i] = fgetc(file)) == EOF){
		break;
		}

//printf("%c", matrix[j][i]);
		i++;
		if(i == 22){
		j++;
		i = 0;
		}
	}

	last = j;
	i = 0;
	j = 0;

	while(1){

		printf("%c", matrix[j][i]);
		j++;
		if(j == last){
		i++;
		j = 0;
		}
		if(matrix[j][i] == 0){
		continue;
		}
		if(i == 22 && j == 0){
		break;
		}
	}	

	printf("\n");


	fclose(file);

}
