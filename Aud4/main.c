#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define M_PI		3.14159265358979323846

typedef struct
{
	double value;
	struct Node* next;
}Node;

//добавить элемент в список
void push(Node** head, double data) {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->value = data;
	tmp->next = (*head);
	(*head) = tmp;
}

void createList()
{

}

//удалить элемент из списка на который показывает head 
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

//адресс n узла 
Node* getNth(Node* head, int n) {
    int counter = 0;
    while (counter < n && head) {
        head = head->next;
        counter++;
    }
    return head;
}

// адресс последнего узла 
Node* getLast(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    while (head->next) {
        head = head->next;
    }
    return head;
}

// вывести список 
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

    float ans , R , a;
    scanf_s("%f%f", &a, &R);
    if (a / 2 >= R)
        printf("%.3f", M_PI * R * R);
    else
    {
        float s = 2 * ((sqrt((R*R - (a / 2) * (a / 2))) * (a / 2)) / R) / R;
        //printf("%f\n",s);
        //printf("%f\n", asin(s));
       // printf("%f\n%f\n", M_PI * R * R, R * R * (asin(s) - s));
        ans = M_PI * R * R - 2 * R * R * (asin(s) - s);
        printf("%.3f", ans);
    }
    

}