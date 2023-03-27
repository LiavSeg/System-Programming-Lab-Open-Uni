#include"permut.h"

/*permcheck  - this function checks for permutations using quick sort.
							 if the program found a permutation we move (size of the string)*chars in the data file
							 otherwise we use sliding window principle to go over any other permutation that may exist
*/

int comparator (const void *p1, const void *p2){
  	return (*(char *)p1 - *(char *)p2);
}



void permcheck(FILE *fp,char *string){
	char *perm,*temp;
	int count,i;
	long int pos;
	fpos_t position;
	pos = file_length(fp);
	count = i =0;
	perm = (char *)malloc(strlen(string)+1);

	if(!perm){
		fprintf(stderr,"Memory allocation failure\n");
		exit(0);
	}
	temp = (char *)malloc(strlen(string)+1);	
	if(!temp){
		printf("Memory allocation failure\n");
		exit(0);
	}

	
	strcpy(temp,string);
	qsort(string,strlen(string),sizeof(char),comparator);

	while(ftell(fp)<=pos-strlen(string)){
	 
		fgetpos(fp,&position);
		fgets(perm,strlen(string)+1,fp);
		qsort(perm,strlen(string),sizeof(char),comparator);	

		if(!strcmp(perm,string)){	
					fsetpos(fp,&position);
					fgets(perm,strlen(string)+1,fp);	
					printf("%s\n",perm);

					count++;
				
	   }
	   else
	   	{
	   		fsetpos(fp,&position);
	   		fseek(fp,1,SEEK_CUR);
	   	
	   	}
	 }
	strcpy(string,temp);
	free(temp);
	free(perm);
	printf("%d Permutations found\n",count);
	 
}	
	
