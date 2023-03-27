#include<stdio.h>
#include<stdlib.h>

/*file_length - this function calculates the sizeof the data.in file in bytes*/

long int file_length(FILE *f){
	long int end;
	fseek(f, 0,SEEK_END);
	end = ftell(f);
	rewind(f);
	return end;
	}
