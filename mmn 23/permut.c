#include"permut.h"

/*
permut function -  this is a the main function of a program that finds, prints and counts how many permutations of a string [provided by the user] there is on an input file
									 The user will provide an input file named - data.in and a string via command line
*/
int main(int argc, char *argv[])
{
	FILE *fp;
	fp = fopen(argv[INPUT_CELL],"r+");
	if(isvalid(argc,argv[INPUT_CELL],argv[STRING_CELL],fp)){
			permcheck(fp,argv[STRING_CELL]);
			fclose(fp);
		}		
	return 0;
}



