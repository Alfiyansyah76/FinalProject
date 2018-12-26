#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//data struct
struct queueNode
{
	char data;
	struct queueNode *nextPtr; //queueNode pointer

};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr; //initialize queue pointer

//function prototypes
void PrintQueue (QueueNodePtr currentPtr);
char dequeue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
int isEMPTY (QueueNodePtr headPtr); // mempertanyakan apakah pada queue kosong apa tidak
void enqueue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void menu ();

int main ()
{
	QueueNodePtr headPtr = NULL; //initialize the value of headPtr
	QueueNodePtr tailPtr = NULL; //initialize the value of tailPtr
	int choice;
	char item; //char input by user

	menu();
	scanf ("%d", &choice );

	while (choice != 5)
	{
		switch (choice)
		{
			//enqueue value
			case 3 :
				printf ("Enter a value : ");
				scanf ("\n%c", &item);
				enqueue (&headPtr, &tailPtr, item);
				printQueue(headPtr);
				break;
			//dequeue value
			case 4 :
				if (!isEMPTY (headPtr))
				{
					item = dequeue (&headPtr, &tailPtr);
					printf ("%c has been dequeued. \n", item);
				}//end if
				printQueue (headPtr);
				break;
			//default case
			default:
				printf ("invalid choice\n\n");
				menu ();
				break;
		}//end switch

		printf ("your choice : ");
		scanf ("%d", &choice);
	}//end while

	return 0;
}//end main

//display the function

void menu ()
{
	printf (" 3. Add item to the queue (Enqueue)\n"
			" 4. To remove item from the queue\n"
			" 5. End the program\n");

};//end menu function

//enqueue function
void enqueue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{
	QueueNodePtr newPtr; //pointer to new node
	newPtr = malloc (sizeof(QueueNode)); //newPtr gets memory allocation

	if (newPtr != NULL)
	{
		//is space available
		newPtr->data = value;
		newPtr->nextPtr = NULL;

		//if empty, insert node at head
		if (isEMPTY (*headPtr))
		{
			*headPtr = newPtr;
		}//end if
		else
		{
			(*tailPtr)->nextPtr = newPtr;
		}//end else
		*tailPtr = newPtr;

	}//end if

	else
	{
		printf ("%c not inserted. No memory available\n", value);
	}


}//end function enqueue

char dequeue (QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
	char value; //node value
	QueueNodePtr tempPtr; //temporary node pointer

	value = (*headPtr)->data;
	tempPtr = *headPtr;
	*headPtr = (*headPtr)->nextPtr;

	//if queue is empty
	if (*headPtr == NULL)
	{
		*tailPtr = NULL;
	}//end if

	free (tempPtr);
	return value;
}//end function dequeue

int isEMPTY (QueueNodePtr headPtr)
{
	return headPtr == NULL;
}//end function

void printQueue(QueueNodePtr currentPtr)
{
	//if queue is empty
	if (currentPtr == NULL)
	{
		printf ("Queue is empty\n\n");
	}//end if

	else
	{
		printf (" the queue is :\n");

		//while not end of queue
		while (currentPtr!=NULL)
		{
			printf("%c -->", currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}//end while

		printf ("NULL\n\n");
	}//end else
}//end function

