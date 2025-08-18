#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100000

int stack_in[MAX], stack_out[MAX];
int top_in = -1, top_out = -1;

void enqueue(int x) {
    stack_in[++top_in] = x;
}

void transfer() {
    while (top_in >= 0) {
        stack_out[++top_out] = stack_in[top_in--];
    }
}

void dequeue() {
    if (top_out == -1) {
        transfer();
    }
    if (top_out >= 0) {
        top_out--; 
    }
}

void printFront() {
    if (top_out == -1) {
        transfer();
    }
    if (top_out >= 0) {
        printf("%d\n", stack_out[top_out]);
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    scanf("%d", &q);

    while (q--) {
        int type, x;
        scanf("%d", &type);

        if (type == 1) {
            scanf("%d", &x);
            enqueue(x);
        } else if (type == 2) {
            dequeue();
        } else if (type == 3) {
            printFront();
        }
    }
    
    return 0;
}
