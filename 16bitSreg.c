#include <stdlib.h>
#include <stdio.h>






char* int2bin(unsigned short x){
	int size = sizeof(x)*8;
    char* res = malloc(size);
    int i = size;
    while(i>0){
        i--;
        res[size-1-i] = ((1<<i)&x) ? '1' : '0';
    }
    return res;
}

unsigned short convert(char pot)
{
	return (~0)+(1<<(pot/8));
}


int main(int argc, char** argv)
{
	char i;
	for(;i<127;i++)
		printf("%s\n", int2bin(convert(i)));
}