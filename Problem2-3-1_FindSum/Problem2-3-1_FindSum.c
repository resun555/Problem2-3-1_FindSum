// Problem2-3-1_FindSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	size_t n;
	scanf("%u", &n);
	double sum = 0.;
	double term;
	for (size_t i = 0; i < n; i++)
	{
		scanf("%lf", &term);
		sum += term;
	}
	printf("%lf", sum);
    return 0;
}

