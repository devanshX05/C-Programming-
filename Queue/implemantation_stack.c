#include <stdio.h>

#define MAX 10

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

// Enqueue (push into stack1)
void enqueue(int x) {
    if (top1 == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    top1 = top1 + 1;
    s1[top1] = x; 
}

// Dequeue (pop from stack2)
int dequeue() {// stack 1 se element uthakr stack 2 mei dalna hai
    if (top1 == -1 && top2 == -1) {
        printf("Queue Underflow\n");
        return -1;
    }

    // Move elements if stack2 is empty
    if (top2 == -1) {
        while (top1 != -1) {
            int value = s1[top1];
            top1 = top1 - 1;

            top2 = top2 + 1;
            s2[top2] = value;
        }
    }

    int value = s2[top2];
    top2 = top2 - 1;

    return value;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());

    enqueue(4);

    printf("Dequeued: %d\n", dequeue());

    return 0;
}