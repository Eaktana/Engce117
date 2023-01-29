//นายเอกธนา อภิญญาวิวัฒน์ 65543206089-6 sec-1
//https://youtu.be/BiB-eQnHpHs
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}typedef NODE;

void addNode(NODE **, int);
void ShowAll(NODE *);
void UpdateNode(NODE **, int, int);

int main() {
    NODE *start = NULL;
    addNode(&start, 10);
    addNode(&start, 20);
    addNode(&start, 30);
    addNode(&start, 40);
    ShowAll(start);
    UpdateNode(&start, 10, 99);
    ShowAll(start);
    UpdateNode(&start, 10, 98);
    ShowAll(start);
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

void UpdateNode(NODE **start, int dataold, int datanew) {
        NODE *temp = *start;
        while(temp != NULL && temp->data != dataold) {
            temp = temp->next;
        }
        if(temp != NULL) {
            temp->data = datanew;
        }
}

