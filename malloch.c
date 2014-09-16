//malloch
#include <stdlib.h>
#include <stdio.h>

#define __DEBUG__ 1
#define __LEN__ __DEBUG__?256:65536
#define __INIT__ if(initialized^1)init()


typedef struct _ { //6 bytes
	unsigned short next;
	unsigned short size;
	unsigned short beginning;
} voidstar;
typedef voidstar freemem;


int            initialized = 0;
char*          memory;
unsigned short freelist;


unsigned short next_free_spot(unsigned short size)
{
	void*    mem = freelist+memory;
	freemem* fm = (*freemem)(mem);
	do
	{
		if (fm->size >= size)
		{
			return freelist
		}
	} while(1);
}



int init()
{
	memory = malloc(__LEN__); // make 64kb memory (2^16)
	initialized = 1;
}

void print()
{
	__INIT__;
	int i = 0;
	int max = __LEN__;
	for(;i<max;i++)
	{
		printf("%i:\t%x\n",i,(*(memory+i))&0xff);
	}
}

void* malloch(int bytes)
{
	
}

void freeze(void* bit)
{

}

int main()
{
	char* qq = (char*)malloch(7);
	*(qq+3) = 0xee;



	print();
	return 0;
}