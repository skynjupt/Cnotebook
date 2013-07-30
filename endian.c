#include <stdio.h>

/*This is a test of endian, 
 *big endian:big address ==> LSB(Least Significant Bit)
 *little endian :little address ==> LSB,as follow:
 */
int main(int argc, char *argv[])
{
	unsigned int a = 0x04030201;
	char *p = (char *)&a;
	printf("p[0]:%0.2x\n", *p);	// 01
	printf("p[1]:%0.2x\n", *(p+1));	// 02
	printf("p[2]:%0.2x\n", *(p+2));	// 03
	printf("p[3]:%0.2x\n", *(p+3));	// 04
	return 0;
}
