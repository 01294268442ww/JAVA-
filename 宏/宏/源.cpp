#include<stdio.h>

#define SWAP(num) (num=(((num&0x55555555)<<1)+(num&0xaaaaaaaa)>>1)))

#define OFFSETOF(st_type,mem_type) (size_t)&(((st_type*)0)->mem_type)
int main()
{
	int a = 15;
	


	return 0;
}