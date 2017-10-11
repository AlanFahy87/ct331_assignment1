#include <stdio.h>
#include "linkedList.h"
#include "tests.h"

void testFunction1(){
	printf("Test 1 running PUSH/POP...\n");
	listElement* p = createEl("FIRST", 30);
	traverse(p);
	printf("\n");
	length(p);
	printf("\n");
	push(&p,"SECOND",20);
	printf("\n");
	length(p);
	printf("\n");
	push(&p,"THIRD",20);
	printf("\n");
	length(p);
	printf("\n");
	traverse(p);
	printf("POP\n");
	pop(&p);
	length(p);
	printf("\n");
	traverse(p);
	printf("\nTest 1 complete.\n");
	printf("*******************************\n\n");
}
void testFunction2(){
	printf("Test 2 running ENQUEUE/DEQUEUE...\n");
	listElement* p = createEl("FIRST", 30);
	traverse(p);
	printf("\n");
	length(p);
	printf("\n");
	enqueue(&p,"SECOND",20);
	printf("\n");
	length(p);
	printf("\n");
	enqueue(&p,"THIRD",20);
	printf("\n");
	length(p);
	printf("\n");
	traverse(p);
	printf("DEQUEUE\n");
	dequeue(p);
	length(p);
	printf("\n");
	traverse(p);
	printf("\nTest 1 complete.\n");
	printf("*******************************\n\n");
}

void runTests(){
	testFunction1();
	testFunction2();
	printf("Tests running...\n");

	listElement* l = createEl("Test String (h).", 30);
	//printf("%s\n%p\n", l->data, l->next);
	//Test create and traverse
	traverse(l);
	printf("\n");

	//Test insert after
	listElement* l2 = insertAfter(l, "another string (e)", 30);
	insertAfter(l2, "a final string (l)", 30);
	traverse(l);
	printf("\n");
	length(l);
	printf("\n");
	// Test delete after
	deleteAfter(l);
	traverse(l);
	printf("\n");

	printf("\nTests complete.\n");
}
