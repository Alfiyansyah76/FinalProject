#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int a[SIZE]={};
int i;
int pass,j,temp,low,mid,high,mark;
 
int inputan ()
{
	printf("masukkan elemen array\n");
	for (i=0; i<SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf ("tampilan array : \n");
	for (i=0; i<SIZE; i++)
	{
		printf("%d   ", a[i]);
	}
}

void bubblesort ()
{
	
	for (pass=1; pass<SIZE; pass++)
	{
		for (j=0; j<SIZE-1; j++)
		{
			if (a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]= temp;
			}
		}
	}
	printf("\nSetelah diurut\n");
	for (j=0; j<SIZE; j++)
	{
		printf("\n%d  ", a[j]);
	}
}

void sequential ()
{	
	int x,m;
	printf("\n\n Search using sequential \n ");
	printf ("\nmasukkan angka yang ingin dicari : \n");
	scanf("%d", &x);
	for (i=0; i<SIZE; i++)
	{
		if(x == a[i])
		{
			m=1;
			printf("indeks aangka yang ingin anda cari ada di urutan ke %d", i);
			printf ("\n___________________________________________________________\n");
		}
	}
	
	if (m!=1)
	{
		printf ("\n maaf angka yang ingin anda cari tidak ketemu\n");
		printf ("\n_______________________________________________________________\n");
	}
	
}

void binary()
{
	int i;
	int key;
	int result;
	printf("\n Search using binary \n ");
	printf("\n\nmasukkan angka yang ingin anda cari :");
	scanf("%d", &key);
	
	low=0;
	high=SIZE-1;
	
	while (low<=high)
	{
		mid=(low + high)/2;
		if(key==a[mid])
		{
			mark=1;
			break;
		}
		else
			if(key>a[mid])
				low = mid + 1;
			else 
				high = mid - 1;
			
	}
	
	if (mark == 1)
	{
		printf("\nelemen %d ditemukan pada indeks %d", key, mid);
		("\n_______________________________________________________________\n");
	}
	else
	{
		printf("\nnilai %d tidak ditemukan", key);
		("\n_______________________________________________________________\n");
	}
	
}


int main() {
	
	inputan();//menginput array
	bubblesort();//sorting angka
	sequential();//search menggunakan sequential
	binary();//search menggunakan binary

	return 0;
}
