#include"permut.h"
/*
isvalid - This function checks if the command line arguments are compatible for permut function

*/
int isvalid(int arg, char *name, char *string, FILE *f){
char *sname="data.in";
	
	 if(arg < INPUT_SIZE){
   	fprintf(stderr,"%s","Invalid input - missing arguments.\n");
		return 0;
	}
	
	else if(arg>INPUT_SIZE){
		fprintf(stderr,"%s","Invalid input - too many arguments.\n");
		return 0;
	}
	
	else	if(!strcmp(string,""))
	{
		fprintf(stderr,"%s","Invalid input - empty string.\n");
		return 0;
	}
	
	else if (strcmp(name,sname)){
		fprintf(stderr,"Unidentified file's name\n");
		return 0;
	}
	
	
	else if(!f){
		fprintf(stderr,"Can't open input file\n");
		return 0;
	}
	
	else if(feof(f)!=0){
			fprintf(stderr,"Blank input file\n");
			return 0;
			}
	
	else 
		return 1;
}		
