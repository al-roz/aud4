#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	double value;
	struct Node* next;
}Node;

//добавить элемент в список
void push(Node** head, int data) {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->value = data;
	tmp->next = (*head);
	(*head) = tmp;
}

//удалить элемент из списка
int pop(Node** head) {
    Node* prev = NULL;
    int val;
    if (head == NULL) {
        exit(-1);
    }
    prev = (*head);
    val = prev->value;
    (*head) = (*head)->next;
    free(prev);
    return val;
}

int main()
{
	srand(time(NULL));
	Node* head = NULL;
}