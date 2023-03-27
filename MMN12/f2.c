#include"f2.h"

/*
 get_inputs function - Gets 4 strings using getchar method in the following order length, first index, second index and a string.
					   The function can get all inputs together in the same line or each input individually. The function keeps getting an input (length and indexes) untill it reaches a blank space
					   As for the string it keeps getting until it reaches 'EOF'.(Under the assumption that the input is smaller than 512) 
*/

void get_inputs(char len[],char i[], char j[],char str[])
{

char ch;
int temp = 0; /*an indicator for the current getchar input*/

	ch = getchar();
	while (!isspace(ch) || temp == 0 )/*if temp = 0 the input can be a blank space  otherwise loop ends */
	{				
		len[temp] = ch;
		temp++;
		ch = getchar();
	}
	
	len[temp] = '\0';/*Marking the end of the string*/
	temp = 0;	
	ch = getchar();
	
	while (!isspace(ch)|| temp == 0)/*if temp = 0 the input can be a blank space  otherwise loop ends */
	{		
		i[temp] = ch;
		temp++;
		ch = getchar();	
	}
	
	i[temp] = '\0';/*Marking the end of the string*/
	temp = 0;	
	ch = getchar();
	
	while (!isspace(ch)|| temp == 0)/*if temp = 0 the input can be a blank space  otherwise loop ends */
	{	
		j[temp] = ch;
		temp++;
		ch = getchar();		
	}

	j[temp] = '\0'; /*Marking the end of the string*/
		
	ch = getchar();
	temp = 0;
	while(temp < MAX && ch != EOF)/*loop ends if we reach EOF or exceeding MAX size */
	{
		str[temp] = ch;
		temp++;
		ch = getchar();
	}
	str[temp] = '\0';/*Marking the end of the string*/

}/*end of get_inputs*/
