#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef void(*printFunction)(void* data);
typedef struct listElementStruct listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size,printFunction p);


//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, void* data, size_t size,printFunction p);

//Delete the element after the given el
void deleteAfter(listElement* after);
//gets the length of the list
int length(listElement* list);
//pushes an element onto the list
void push(listElement** list, void* data, size_t size,printFunction p);
//pops an element off the top of the list
listElement* pop(listElement** list);
//enqueues and element into the list
void enqueue(listElement** list, void* data, size_t size,printFunction p);
//dequeues an element from the list
listElement* dequeue(listElement* list);
#endif
