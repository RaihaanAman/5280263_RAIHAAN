#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    int type;   
    char *data; 
    int len;
} Operation;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q;
    scanf("%d", &Q);

    char *S = malloc(1000001 * sizeof(char)); // big enough buffer
    S[0] = '\0'; 
    int length = 0;

    Operation *stack = malloc(Q * sizeof(Operation));
    int top = -1;

    for (int i = 0; i < Q; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            char W[1000001];
            scanf("%s", W);
            int l = strlen(W);
            strcpy(S + length, W);
            length += l;
            S[length] = '\0';

            top++;
            stack[top].type = 1;
            stack[top].len = l;
            stack[top].data = NULL;

        } else if (type == 2) {
            int k;
            scanf("%d", &k);

            char *deleted = malloc((k + 1) * sizeof(char));
            strncpy(deleted, S + length - k, k);
            deleted[k] = '\0';

            length -= k;
            S[length] = '\0';

            top++;
            stack[top].type = 2;
            stack[top].data = deleted;
            stack[top].len = k;

        } else if (type == 3) {
            int k;
            scanf("%d", &k);
            printf("%c\n", S[k - 1]);

        } else if (type == 4) {
            Operation last = stack[top--];

            if (last.type == 1) {
                length -= last.len;
                S[length] = '\0';
            } else if (last.type == 2) {
                strcpy(S + length, last.data);
                length += last.len;
                S[length] = '\0';
                free(last.data);
            }
        }
    }

    free(S);
    free(stack);
    return 0;    
    return 0;
}
