#include <stdlib.h>
#include <stdio.h>






unsigned short byte2short(char b)
{
	char c = 8;
	unsigned short answer = 0;
	while(c-->0){
		answer<<=2;
		if (b&(((char)1)<<c))
			answer+=3;
	}
	return answer;
}


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

char* byte2bin(char x){
	int size = sizeof(x)*8;
    char* res = malloc(size);
    int i = size;
    while(i>0){
        i--;
        res[size-1-i] = ((1<<i)&x) ? '1' : '0';
    }
    return res;
}




int main(int argc, char** argv)
{
	char x = 0xff;
	char y = 0x55;
	char z = 0x8a;

	printf("x: %s\ny: %s\nz: %s\n\n", byte2bin(x), byte2bin(y), byte2bin(z));

	unsigned short xx = byte2short(x);
	unsigned short yy = byte2short(y);
	unsigned short zz = byte2short(z);

	printf("x: %s\ny: %s\nz: %s\n\n", int2bin(xx), int2bin(yy), int2bin(zz));


	return 0;
}