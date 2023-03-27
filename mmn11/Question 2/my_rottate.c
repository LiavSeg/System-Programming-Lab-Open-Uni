/*this program gets an unsigned int and rotates it's binary representation by x bits (right + \ left -), prints the binary,octal,decimal and hexadecimal prior to the use if it and post rotation */
#include <stdio.h>
#include <math.h>
#define BYTE 8 /* number of bits in a byte */

void intprint_binary(unsigned int c) /*this functions prints an unsigned integer's representation by using bit masking and bitwise operators */
{	
	int bits = 0; /* a counter of bits */
	unsigned int mask = 1; 
	int count = sizeof(unsigned int)*BYTE; /* getting the right number of bits for any n bits machine */
	mask = mask << (count-1);	
	while (mask!=0)
	{
	
	if((c&mask) != 0 )	
		printf("%u",1);	
	else
		printf("%u",0);
		
	mask = mask >> 1;
	count--;
	bits++;
	if(bits%BYTE == 0) /* devision into separate bytes */ 
		printf(" ");
	}	
	printf("\n");
}


unsigned int my_rottate (unsigned int a, int b)
{

	unsigned int temp,size;
	
	temp = 0;
	size = (sizeof(unsigned int)*BYTE)-fabs(b); /* getting the right difference of total bits for any n bits machine and the number of bits rotation (absolute value of it) */
 	
	if(b>0) /* right rotation case */
	{	
		
		temp = a<<size;		
		a = a>>b;
		a = a|temp;
	}

	else /* left rotation case */
	{
		temp = a>>size;				
		a = a<<-(b);
		a = a|temp;
	}
			
	printf("The rotated number is %u\n",a);	
	printf("The input's binary representation post rotation is:");
	intprint_binary(a); 
	printf("The input's octal representation is %o\n",a);
	printf("The input's hexadecimal representation is %x\n",a);
		
return 0;
}

int main()
{
	unsigned int a;
	int x;
	printf("Hello, please enter an integer\n");
	scanf("%d",&a);
	printf("The integer is %u\n",a);
	printf("The input's binary representation is ");
	intprint_binary(a);
	printf("The input's octal representation is %o\n",a);
	printf("The input's hexadecimal representation is %x\n",a);
	printf("please enter a number of bits to rotate\n");
	scanf("%d",&x); /* getting the rotation size (by number of bits) */
	my_rottate (a,x);
	
	return 0;

}
