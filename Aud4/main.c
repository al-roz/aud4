#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	double value;
	struct Node* next;
}Node;

//�������� ������� � ������
void push(Node** head, double data) {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->value = data;
	tmp->next = (*head);
	(*head) = tmp;
}

void createList()
{

}

//������� ������� �� ������ �� ������� ���������� head 
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

//������ n ���� 
Node* getNth(Node* head, int n) {
    int counter = 0;
    while (counter < n && head) {
        head = head->next;
        counter++;
    }
    return head;
}

// ������ ���������� ���� 
Node* getLast(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    while (head->next) {
        head = head->next;
    }
    return head;
}

// ������� ������ 
void printLinkedList(Node* head) {
    while (head) {
        printf("%.2fl ", head->value);
        head = head->next;
    }
    printf("\n");
}

int main()
{
	//srand(time(NULL));
	//Node* head = NULL;
 //   for (int i = 0; i < 10; i++)
 //   {        
 //       //double x = rand() % 10 ;
 //       //x += 1 / x;
 //       push(&head, i);
 //   }
 //   //Node* tem = getNth(head,7);
 //   //printf("%fl\n", tem->value);

 //   printLinkedList(head);

}