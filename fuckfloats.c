#include <stdio.h>
#include <stdlib.h>



char* int2bin(unsigned x){
    char* res = malloc(32);
    int i = 32;
    while(i>0){
        i--;
        res[31-i] = ((1<<i)&x) ? '1' : '0';
    }
    return res;
}

union FL_UI_Conv {
	unsigned u;
	float f;
};

int main(int argc, char* argv)
{
	int a = 1065353215;
	int b = 1065353217;

	union FL_UI_Conv A;
	union FL_UI_Conv B;

	A.f = (float)a;
	B.f = (float)b;

	printf("float a binary: %s\n", int2bin(A.u));
	printf("float b binary: %s\n", int2bin(B.u));
	printf("converted back to int: %i\n", (int)A.f);

}