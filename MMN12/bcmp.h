/*   
File name: bcmp.h
Program - part of mmn 12  
Include file: contains includes,define and prototypes
			 **MAX - is the max size for the string, therefore any other input can't exceed that size as well and for this reason this is  maximum size for any input of this program.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 512
void get_inputs(char len[],char i[], char j[],char str[]);
int is_valid_num(char length[] , char i[], char j[]);
int is_valid_len(int l, int ind1, int ind2, char st[]);
         
