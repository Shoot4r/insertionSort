#include<iostream>
#include<algorithm>
using namespace std;

// find index to min element
int minIdx( int a[], int i )
{
    if( i == 0 ) return 0;
    int j = minIdx( a, i-1 );
    if( a[i-1] < a[j] ) return i-1;
    return j;
}

void Swap( int& x, int& y )
{
    int temp = x;
    x = y;
    y = temp;
}

// insertion sort.
void Selection_sort( int* a, int sz )
{
    if( sz == 1 ) return;
    int j = minIdx( a, sz );
    if( j != 0 ) Swap( *a, a[j] );
    Selection_sort( ++a, sz-1 );
}

int main()
{
	int mur, bagana;
	printf("muriin dugaar oruulna uu=");
	cin>>mur;
	printf("baganiin dugaar oruulna uu=");
	cin>>bagana;
	int A[mur][bagana];
	printf("Before sorting:\n");
	for (int i = 0; i < mur; i++)
	{
		for (int j = 0; j < bagana; j++)
		{
			A[i][j]=rand()%100+1;
			cout << A[i][j] << "\t";	
		}
		cout << endl;
	}

    Selection_sort( A[0], mur*bagana );

    printf("After sorting:\n");
	for (int i = 0; i < mur; i++)
	{
		for (int j = 0; j < bagana; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
