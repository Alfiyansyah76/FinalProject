#include <stdio.h>
#include <string.h>



typedef struct Data
{
	char nama[20];
	char nilai[6];
	struct Data *next_Data;
} Mahasiswa;

Mahasiswa *head;

void Print(Mahasiswa *r);
void Add(Mahasiswa *temp);
void Delete(Mahasiswa *temp);
void Insert(Mahasiswa *temp);
void judul();
void ErrorMessages();
void keluar();
int count();


int main()
{
	int pilihan;
	Mahasiswa *Temp = NULL;
	while(1)
	{
		judul();
		printf("Menu");
		printf("\n----\n");
			
		printf("\n1. Push Mahasiswa");
		printf("\n2. Delete Mahasiswa");
		printf("\n3. Display Mahasiswa");
		printf("\n4. Insert Mahasiswa");
		printf("\n5. Keluar\n");
			
		printf("\nInput	: "); scanf("%d", &pilihan);
		switch(pilihan)
		{
			case 1: 	Add(Temp);			break; //ADD = PUSH
			case 2:		Delete(Temp);		break;
			case 3: 	Print(Temp);		break;
			case 4: 	Insert(Temp);		break;
			case 5:		keluar();			break;
			default:	ErrorMessages();	break;	//Error
		}
	}
}

void Print(Mahasiswa *r)
{
	r=head;
	int i = 1;
	judul();
    if(r==NULL)
    {
    	return;
    }
    while(r!=NULL)
    {
    
    	printf("\n%.2d. Nama		: %s ", i,r->nama);
    	printf("\n    Nilai		: %s",r->nilai);
       	r=r->next_Data;
    	i++;
    	printf("\n");
    }
    printf("\n\n");
    
	system("pause");
}

void Add(Mahasiswa *temp)
{
    temp=(Mahasiswa *)malloc(sizeof(Mahasiswa));
    
    judul();
	printf("\nAdd");
	printf("\n===\n");
	printf("Nama		: "); scanf(" %[^\n]s", temp->nama);
    printf("Nilai		: "); scanf(" %s", temp->nilai);
        
	if (head== NULL)
    {
    	head=temp;
    	head->next_Data=NULL;
    }
    else
    {
    	temp->next_Data=head;
    	head=temp;
    }
}

void Delete(Mahasiswa *temp)
{
	Mahasiswa *prev;
	char NAMA[20];
    temp=head;
    judul();
    
    printf("\nDelete");
	printf("\n======\n");
	printf("Nama		: "); scanf(" %s", NAMA);
    
    while(temp!=NULL)
    {
    	if(strcmp(temp->nama, NAMA) == 0)
    	{
       		if(temp==head)
        	{
        		head=temp->next_Data;
        		free(temp);
        		return;
        	}
        	else
        	{
        		prev->next_Data=temp->next_Data;
        		free(temp);
        		return;
        	}
    	}
    	else		//Kalo gk ketemu, di next
    	{
        	prev=temp;
        	temp= temp->next_Data;
    	}
    }
	return 0;
}

void judul()
{
	system("cls");
	
	printf("\n========================");
	printf("\n     Data Mahasiswa     ");
	printf("\n========================");
	printf("\n\n\n");
}

void ErrorMessages()
{
	judul();
	printf("\n\n-------------------------------------------------------");
	printf("\nError Messages	: Maaf Pilihan Yang Anda Masukan Salah");
	printf("\n-------------------------------------------------------\n\n");
	
	system("pause");
}

void Insert(Mahasiswa *temp)
{
    int i, pos;
    Mahasiswa *left,*right;
    
    temp=(Mahasiswa *)malloc(sizeof(Mahasiswa));
    
	judul();
	printf("\nInsert");
	printf("\n======\n");
	printf("Nama		: "); scanf(" %[^\n]s", temp->nama);
	printf("Nilai		: "); scanf(" %s", temp->nilai);
	printf("Position	: "); scanf("%d", &pos);
    
    if(head == NULL)
    {
    	head=temp;
    	head->next_Data=NULL;
	}
    else
    {
		right=head;
   		for(i=1;i<pos;i++)
		{
    		left=right;
			right=right->next_Data;
			if(right == NULL)
			{
				break;
			}
		}
		left->next_Data=temp;
		left=temp;
    	left->next_Data=right;
    	return;
	}
}

void keluar(){
	return 0;
}


