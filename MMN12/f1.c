#include"f1.h"
/*is_valid_num function - gets three strings that represent the comparison length, first index and the second index. 
                          Checks if the input is valid. if it isn't valid the function prints an exact message regarding the error type and returns 0

is_valid_len function - gets three int numbers length, first index and second index. checks if the given values are within the string's boundaries.
						if any case exceeds the string's boundaries the function prints an exact message regarding the error type and returns 0.
						if the values are valid the values will be printed. 
*/


int is_valid_num(char length[] , char i[], char j[]) 
{
	int k;
	
	if(length[0] == '-')
	{ 
		printf("\nInvalid length input - negative length.\n");
			return 0;
	}

	for(k = 0 ; k < strlen(length) ; k++)
	{
		if(length[k] == '.')
		{
			printf("\nInvalid length input - not a decimal number.\n");
				return 0;		
		}
		
		if(isalpha(length[k]))
		{
			printf("\nInvalid length input - length isn't a number. \n");
				return 0;
		}
					
			
		if(isspace(length[k]) && length[k] != '\n')
		{
			printf("\nInvalid length input - length space a number. \n");
				return 0;
		}
				

	}

	if(i[0] == '-' || j[0] == '-')
	{
		printf("\nInvalid index input - negative index.\n");
			return 0;
	}



	for(k = 0 ; k <strlen(i) ; k++)
	{
			if(i[k] == '.')
			{
			printf("\nInvalid first index input - not a decimal number.\n");
				return 0;		
			}
			
			if(isalpha(i[k]))
			{
			printf("\nInvalid first index input - not a number.\n");
				return 0;
			}
			if(isspace(i[k]))
			{
				printf("\nInvalid first index input - it's a blank space.\n");
					return 0;
			}
	}

	for(k = 0 ; k <strlen(j) ; k++)
	{
			if(j[k] == '.')
			{
			printf("\nInvalid second index input - not a decimal number.\n");
				return 0;		
			}
			
		if(isalpha(j[k]))
			{
			printf("\nInvalid second index input - not a number.\n");
				return 0;
			}

			if(isspace(j[k]))
			{
				printf("\nInvalid second index input - it's a blank space.\n");
					return 0;
			}			
	}
	
	
	return 1;/*Valid inputs*/

}/*end of is_valid_num*/






int is_valid_len(int l, int ind1, int ind2, char st[])
{

	if(l > MAX)
	{
		printf("\nInvalid length - exceeds maximum size\n");
		return 0 ;	
	}
	
	if( l > strlen(st))
	{
		printf("\nInvalid length - exceeds string's length\n");	
		return 0 ;
	}	
	
	if(ind1 > MAX)
	{
		printf("\nInvalid first index -  exceeds maximum size\n");
		return 0 ;	
	}
	if(ind2 > MAX)
	{
		printf("\nInvalid second index -  exceeds maximum size\n");
		return 0 ;	
	}
	if(ind1 > strlen(st))
	{
		printf("\nInvalid first index -  exceeds string's size\n");
		return 0 ;	
	}
	if(ind2 > strlen(st))
	{
		printf("\nInvalid second index -  exceeds string's size\n");
		return 0 ;	
	}
	
		
	if(l+ind1 > MAX )
	{
		printf("\nInvalid first segment length - exceeds maximum size\n");
		return 0 ;	
	}	

	if(l+ind2 > MAX )
	{
		printf("\nInvalid second segment length - exceeds maximum size\n");
		return 0 ;	
	}	

	
	if(ind1 + l > strlen(st))
	{
		printf("\nInvalid  first segment length - exceeds string's size\n");
		return 0 ;	
	}

	if(ind2 + l > strlen(st))
	{
		printf("\nInvalid  first segment length - exceeds string's size\n");
		return 0 ;	
	}			

	if(ind1 > strlen(st))
	{
		printf("\nInvalid first index value  - exceeds string's size\n");
		return 0 ;	
	}	
 
	if(ind2 > strlen(st))
	{
		printf("\nInvalid second index value  - exceeds string's size\n");
		return 0 ;	
	}	
 

		printf("\nThe length is: %d\n",l);
		printf("The first index is: %d\n",ind1);
		printf("The second index is: %d\n",ind2);
		printf("The string is: %s\n",st);
		

	return 1;

}


