#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char* Word;
    char* WordType;
    char* definition;
    struct node* next;

};

typedef struct node data;
typedef data* dataPtr;

void insert(dataPtr* headW);
void printList(dataPtr headR);
void deleteData(dataPtr* headW);
void Sorting(dataPtr headR);

int main(void)
{
    dataPtr head=NULL, wipeList=NULL, nextWipe, WORD=NULL;
    int x;
    do
    {
        printf("   ==============================  \n");
        printf("  -|  KAMUS BAHASA INDO  |- \n");
        printf("   ------------------------------  \n");
        printf("\n\tMenu: \n");
        printf("\t1. Insert Data\n" "\t2. Delete Data\n" "\t3. Display List\n"
               "\t4. Exit\n");
        printf("   ------------------------------  \n");
        printf(" Pilih: ");
        scanf(" %d", &x);
        getchar();
        switch(x)
        {
        case 1:
            system("cls");
            insert(&head);
            system("cls");
            break;
        /*case 2:
            system("cls");
            deleteData(&head);
            system("cls");
            break;*/
        case 3:
            system("cls");
            printList(head);
            printf("\nPress enter key to continue: ");
            getchar();
            system("cls");
            break;
        /*case 4:
            system("cls");
            nextWipe = head;
            head = NULL;
            while(nextWipe!=NULL)
            {
                wipeList = nextWipe;
                nextWipe = nextWipe->next;
                free(wipeList->name);
                free(wipeList);
            }
            break;*/
        default:
            system("cls");
            printf("\n\n\n\t\t INVALID COICE!\n\t\t TRY AGAIN!\n");
            printf("\nPress enter to continue: ");
            getchar();
            getchar();
            system("cls");
        }
    }while(x!=4);

}

void insert(dataPtr* headW)
{
    dataPtr word = malloc(sizeof(data));
    word->Word = malloc(100*sizeof(char));
    word->definition = malloc(200*sizeof(char));
    word->WordType = malloc(100*sizeof(char));
    word->next = NULL;
    printf("\nTipe kata: ");
    gets(word->WordType);
    realloc(word->WordType, strlen(word->WordType)*sizeof(char));
    printf("Masukan kata: ");
    gets(word->Word);
    realloc(word->Word, strlen(word->Word)*sizeof(char));
    printf("Masukan Definisi: ");
   	gets(word->definition);
   	realloc(word->definition, strlen(word->definition)*sizeof(char));
    getchar();
    if(*headW==NULL)
    {
        *headW = word;
    }
    else
    {
        dataPtr* temp = &((*headW)->next);
        while(*temp!=NULL)
        {
            temp = &((*temp)->next);
        }
        *temp = word;
    }
    
}

void printList(dataPtr headR)
{
    dataPtr temp = headR;
    printf("\n\n\t\tList Kata: \n\n");
    while(temp!=NULL)
   {
    	printf("\t\tTipe Kata : %s\n", temp->WordType);
        printf("\t\tkata  : %s\n", temp->Word);
        printf("\t\tDefinisi : %s\n\n", temp->definition);
        temp = temp->next;
	}
}

/*void deleteData(dataPtr* headW)
{
    dataPtr temp, prevTemp = NULL;
    temp = *headW;
    char* searchS = malloc(100*sizeof(char));
    printf("\n Masukan nama mahasiswa dari data yang ingin dihapus: \n\n\t");
    gets(searchS);
    if(temp!=NULL && strcmp(temp->name, searchS)==0)
    {
        *headW = temp->next;
        free(temp->name);
        free(temp);
    }
    else
    {
        while((temp!=NULL) && (strcmp(temp->name, searchS)!=0))
        {
            prevTemp = temp;
            temp = temp->next;
        }
        if(temp!=NULL)
        {
            prevTemp->next = temp->next;
            free(temp->name);
            free(temp);
        }
        else
        {
            printf("\n Data tidak ditemukan!\n");
            printf("\n Press enter to continue: ");
            getchar();
        }

    }
    free(searchS);
}*/

void Sorting (dataPtr headR)
{
	dataPtr temp = malloc(sizeof(data));
	dataPtr i, j;
	
	for (i=headR; i->next!=NULL; i=i->next)
	{
		for (j=i->next; j!=NULL; j=j->next)
		{
			if (temp!=NULL && strcmp(i->Word, j->Word)!=0)
			{
				temp = i->next;
				i->next = j->next;
				j->next = temp;
			}
		}
	}	
	
}
