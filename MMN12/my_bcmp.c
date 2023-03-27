
#include"bcmp.h"
/*my_bcmp function - gets a reference for two valid substrings and checks if there is an overlap of 'length' bits */


int my_bcmp(const void *b1, const void *b2, int length) 
{
	char *p1; 
	char *p2;
	int k;
	if(length == 0)/*empty segments are equal*/
		return 0; 

	p1 = (char *)b1;  
	p2 = (char *)b2;            
	
	for(k = 0; k < length; k ++)
	{
		if(p1[k] != p2[k])
			return 1;
	}

return 0;
}/*end of my_bcmp*/


int main()
{
	const void *c1,*c2;	
	int i1,	j1,ln;
	char len[MAX],i[MAX],j[MAX],str[MAX];
	
	printf("\n*--------------------------------------*\n");
	printf("Hello, please enter your input in the following order: \n•Length\n•First index\n•Second index\n•String\n\n");
 	get_inputs(len,i,j,str);

	if(is_valid_num(len,i,j))
	{
		i1 = (int)strtol(i,NULL,10);/*converting a string to a long number ,casted to int(max size of the inputs can be represented by an integer therfore casting is valid)*/
		j1 =(int) strtol(j,NULL,10);/*converting a string to a long number ,casted to int*/
		ln = (int)strtol(len,NULL,10);/*converting a string to a long number ,casted to int*/
	}
	else
		return 0;/*program ends if the input isn't valid*/
		
	if(is_valid_len(ln,i1,j1,str))
	{

		c1 = &str[i1];/*a reference for the first substring*/
		c2 = &str[j1];/*a reference for the second substring*/
	
	
		if(!my_bcmp(c1,c2,ln))/*using the comparison function*/
			printf("*--------------------------------------*\nOverlap of %d bytes found\n",ln); 

		else 
			printf("Overlap was not found\n");
	}	

return 0;
} /*end of main*/

