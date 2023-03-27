#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 80 /* The max string's size */
#define MIN_SEQ 3/* The minimun size of the sequence */

int shortened_string(char st[])/* this function gets a string and reduces any ascending alphabetical order greater than 3 to the pattern first - last characters of the sequence */ 
{
	int i, k, count; /* i indicates the start of the sequence, k-1 indicates the end of the sequence, count indicates the number of letters on the sequence - if the sequence exists */ 
	k = 1;
	count = 1 ;			 
 	for( i = 0; i < strlen(st)  ; i++)
 	{
    		while(st[k] - st[i] == k-i && isalpha(st[k]))/*at the end of this while loop if a sequence exists the end of it is K-th letter of the string on the k-1th index*/
 			{
 				count ++;
 				k++;
 			}
 			
 		if(count >= MIN_SEQ) /*evaluating the sequence, if it exists and greater than 3 shorten the sequence*/
 			{
 				st[i+1] = '-';
 				i++;
 				
 				memcpy(&st[i+1],&st[k-1],strlen(st) - i );
 			}
 		count = 0;	
 		k = i+1;			
 	}
 	
 
  return 0 ;
}/* end of shortened_string method */

int main() /* this main method gets the string input and uses the shortened_string function */
{

	char str1[MAX]; /*this array will store the string input */
	printf("<------------------------------>\n");
	printf("Hello, please enter an input\n");

	fgets(str1,MAX,stdin);

	printf("The input is %s\n",str1);

	shortened_string(str1);

	printf("The shortened string is %s\n",str1);

	return 0 ; 

} /* end of main method */




