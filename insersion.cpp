#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int num[100][100];
int i, j,r,c;

void input(int r, int c)
{ 
    for(i=0; i<r; i++)
    {
       for(j=0; j<c;j++)
    	{
       		num[i][j]=rand()%100+1;
	   	}
    }
}

void sort(int r, int c)
{ 
	for(i=0; i<r; i++)
    { 
		for(j=0; j<c; j++)
		{
        	if(i%2==0)
           	{  
				int min=num[i][j],pos=i;
 				for(int k=i+1; k<r; k++ )
  				{ 
					if(num[k][j]<min)
					num[k][j]=min;
					pos=k;
   				}
 				num[pos][j]=num[i][j];
 				num[i][j]=min;
 			}
			else
			{  
				int max=num[i][j],pos1=i;
 				for(int l=i+1; l<r; l++ )
 				{ 
					if(num[l][j]>max)
					num[l][j]=max;
					pos1=l;
   				}
 				num[pos1][j]=num[i][j];
 				num[i][j]=max;
 			}	
		}
	}
}

void display(int r, int c)
{ 
    for(i=0; i<r; i++)
    { 
		cout<<"\n";
        for(j=0; j<c;j++)
        {
            cout<<num[i][j]<<"\t";
        }
        cout<<"\n";
	}
}

int main()
{ 
    cout<<"muriin dugaar oruulna uu="<<endl;
    cin>>r;
    cout<<"baganiin dugaar oruulna uu="<<endl;
    cin>>c;
    input(r,c);
    cout<<" Before sorting"<<endl;
    display(r,c);
    sort(r,c);
    cout<<"\n After sorting"<<endl;
    display(r,c);
    return 0;
}
