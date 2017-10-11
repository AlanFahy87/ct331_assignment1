#include <stdio.h>
#include "genericLinkedList.h"
#include "tests.h"

void printStr(void *data){
	printf("%s\n", data);
}
void printFloat(void *data){
	printf("%f\n", *(float*)data);
}
void printInt(void *data){
	printf("%d\n", *(int*)data);
}
void printChar(void *data){
	printf("%c\n", *(char*)data);
}
void runTests(){
	printf("Tests running...\n");
	char str[]  = "Generic";
	listElement *p = createEl(&str,sizeof(str),&printChar);
	traverse(p);
	length(p);
	printf("\n");
	traverse(p);
	char c = 'P';
	enqueue(&p,&c,sizeof(c),&printChar);
	printf("\n");
	length(p);
	int num = 30;
	enqueue(&p,&num,sizeof(num),&printInt);
	traverse(p);
	length(p);
	printf("\n");
	pop(&p);
	traverse(p);
	length(p);
	printf("\nTests complete.\n");
}
