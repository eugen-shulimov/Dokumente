#include <stdio.h>
	#ifndef N
	#define N 10
	#endif
	
	#if N > 10
		#define A "^-^"
	#elif N == 10
		#define A ";)"
	#else
		#define A ":("
	#endif
	
	int main()
	{
		int i;
		puts("Hello world!");
		#ifdef N
		for (i = 0; i < N; i++)
		{
			puts(A);
		}
		#endif
		
		return 0;
	}