#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genericLinkedList.h"



typedef struct listElementStruct{
	void* data;
	size_t size;
	printFunction print;
	struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size,printFunction p){
	listElement* e = malloc(sizeof(listElement));
	if(e == NULL){
		//malloc has had an error
		return NULL; //return NULL to indicate an error.
	}
	void* dataPointer = malloc(sizeof(void)*size);
	if(dataPointer == NULL){
		//malloc has had an error
		free(e); //release the previously allocated memory
		return NULL; //return NULL to indicate an error.
	}

	memmove (dataPointer, data,size);
	e->data = dataPointer;
	e->size = size;
	e->print=p;
	e->next = NULL;
	return e;
}
void enqueue(listElement** listHead,void* data,size_t size,printFunction p){
	listElement* newEl = createEl(data,size,p);
	newEl->next = *listHead;
	printf("%s",newEl->data);
	*listHead = newEl;
}
listElement* dequeue(listElement* list){
	listElement* curr = list;
	while((curr->next)->next!=NULL){
		curr = curr->next;
	}
	listElement* out = curr->next;
	curr->next = NULL;
	return out;
}
void push(listElement** list, void* data, size_t size,printFunction p){
	listElement* newEl = createEl(data,size,p);
	newEl->next = *list;
	*list = newEl;
	printf("%s",newEl->data);
}
//Prints out each element in the list
void traverse(listElement* start){
	listElement* current = start;
	while(current != NULL){
		printf("%s\n", current->data);
		current = current->next;
	}
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, void* data, size_t size,printFunction p){
	listElement* newEl = createEl(data, size,p);
	listElement* next = el->next;
	newEl->next = next;
	el->next = newEl;
	return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after){
	listElement* delete = after->next;
	listElement* newNext = delete->next;
	after->next = newNext;
	//need to free the memory because we used malloc
	free(delete->data);
	free(delete);
}
int length(listElement* list){
	int count = 0;
	listElement* curr = list;
	while(curr!= NULL){
		count++;
		curr = curr->next;
	}
	printf("Length is %d",count);
	return count;

}

listElement* pop(listElement** list){
	listElement* out = *list;
	*list = (*list)->next;
	return out;
}
