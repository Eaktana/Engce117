#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}typedef NODE;

void addNode(NODE **, int);
void ShowAll(NODE *);
void ShowBack(NODE *);

int main() {
    NODE *start = NULL;
    addNode(&start, 10);
    addNode(&start, 20);
    addNode(&start, 30);
    addNode(&start, 40);
    ShowAll(start);
    ShowBack(start);
    return 0;
}

void addNode(NODE **start, int data) {
    NODE *NewNode = (NODE *) malloc(sizeof(NODE));
    NewNode->data = data;
    NewNode->next = NULL;
    if (*start == NULL) {
        *start = NewNode;
    } else {
       NODE *temp = *start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = NewNode;
    }
}

void ShowAll(NODE *start) {
    NODE *temp = start;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void ShowBack(NODE *start) {
    NODE *temp = start;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    temp = start;
    for (int i = count - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            temp = temp->next;
        }
        printf("%d ", temp->data);
        temp = start;
    }
    printf("\n");
}
