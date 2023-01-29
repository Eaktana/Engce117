#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}typedef NODE;

void addNode(NODE **, int);
void ShowAll(NODE *);
void SwapNode(NODE **, int , int );

int main() {
    NODE *start = NULL;
    addNode(&start, 10);
    addNode(&start, 20);
    addNode(&start, 30);
    addNode(&start, 40);
    ShowAll(start);
    SwapNode(&start, 20, 30);
    ShowAll(start);
    SwapNode(&start, 40, 10);
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

void SwapNode(NODE **start, int data1, int data2) {
    NODE *first = NULL, *second = NULL;
    NODE *prevFirst = NULL, *prevSecond = NULL;
    NODE *temp = *start;
    
    while (temp != NULL) {
        if (temp->data == data1) {
            first = temp;
            break;
        }
        prevFirst = temp;
        temp = temp->next;
    }
    temp = *start;
    while (temp != NULL) {
        if (temp->data == data2) {
            second = temp;
            break;
        }
        prevSecond = temp;
        temp = temp->next;
    }
    
    if (prevFirst != NULL) {
        prevFirst->next = second;
    }else {
        *start = second;
    }
    if (prevSecond != NULL) {
        prevSecond->next = first;
    }else {
        *start = first;
    }

    NODE *tempNext = first->next;
    first->next = second->next;
    second->next = tempNext;
}
