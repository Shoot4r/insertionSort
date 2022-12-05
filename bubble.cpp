#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int mur, bagana;
	printf("muriin dugaar oruulna uu=");
	cin>>mur;
	printf("baganiin dugaar oruulna uu=");
	cin>>bagana;
	int A[mur][bagana];
	int i,j,k,swap;

	printf("Before sorting:\n");

	for(i = 0; i < mur; i++)
	{
    	for(j = 0; j < bagana; j++)
		{
    		A[i][j]=rand()%10+1;
		}
	}

    for( i = 0 ; i < mur; i++)
	{
        for( j = 0 ; j < bagana; j++)
		{
    		printf("%3d", A[i][j]);
        }
    	printf("\n");
    }

	printf("After sorting:\n");
    for(k = 0; k < mur; k++)
	{   
        for(i = 0 ; i < bagana; i++)
		{
            for(j = i + 1; j < bagana; j++)
			{
        		if(A[k][i] > A[k][j])
				{
        			swap     = A[k][i];
        			A[k][i]   = A[k][j];
        			A[k][j] = swap;
            	}
        	}
    	}
	}

    for( i = 0 ; i < mur; i++)
	{
        for( j = 0 ; j < bagana; j++)
		{
    		printf("%3d", A[i][j]);
        }
    	printf("\n");
    }
	return 0;
}
