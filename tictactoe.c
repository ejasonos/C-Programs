#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct theBoard {                                                      
    char topLeft[100];
    char topMiddle[100];
    char topRight[100];
    char midLeft[100];
    char midMiddle[100];
    char midRight[100];
    char lowLeft[100];
    char lowMiddle[100];
    char lowRight[100];
} tictactoe;

int main() {
    struct theBoard move;
    char reply[100];
    char turn[100] = "x";

    strcpy(move.topLeft, " ");
    strcpy(move.topMiddle, " ");
    strcpy(move.topRight, " ");
    strcpy(move.midLeft, " ");
    strcpy(move.midMiddle, " ");
    strcpy(move.midRight, " ");
    strcpy(move.lowLeft, " ");
    strcpy(move.lowMiddle, " ");
    strcpy(move.lowRight, " ");

    for (int i = 0; i < 9; i++) 
    {
        if (strncmp("x", turn, sizeof(turn)-1) == 0)
        {
            strcpy(turn, "o");
        } else {
            strcpy(turn, "x");
        }
        if (i==8) {
            /* A condition would be good here */
        }

        printf("%s | %s | %s\n", move.topLeft, move.topMiddle, move.topRight);
        printf("----------\n");
        printf("%s | %s | %s\n", move.midLeft, move.midMiddle, move.midRight);
        printf("----------\n");
        printf("%s | %s | %s\n", move.lowLeft, move.lowMiddle, move.lowRight);
        printf("Player %s's turn\n", turn);
        
        if (strncmp(" ", move.topLeft, sizeof(move.topLeft)-1) == 0) {
            printf("Do you want to place %s in top left? (y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.topLeft, turn);
                continue;
            }
        }
        if (strncmp(" ", move.topMiddle, sizeof(move.topMiddle)-1) == 0) {
            printf("Do you want to place %s in top middle? (y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.topMiddle, turn);
                continue;
            }
        }
        if (strncmp(" ", move.topRight, sizeof(move.topRight)-1) == 0) {
            printf("Do you want to place %s in top right(y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.topRight, turn);
                continue;
        }
        }
        if (strncmp(" ", move.midLeft, sizeof(move.midLeft)-1) == 0) {
            printf("Do you want to place %s in mid left? (y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.midLeft, turn);
                continue;
            }
        }
        if (strncmp(" ", move.midMiddle, sizeof(move.midMiddle)-1) == 0) {
            printf("Do you want to place %s in mid middle? (y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.midMiddle, turn);
                continue;
            }
        }
        if (strncmp(" ", move.midRight, sizeof(move.midRight)-1) == 0) {
            printf("Do you want to place %s in mid right? (y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.midRight, turn);
                continue;
            }
        }
        if (strncmp(" ", move.lowLeft, sizeof(move.lowLeft)-1) == 0) {
            printf("Do you want to place %s in low left(y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.lowLeft, turn);
                continue;
        }
        }
        if (strncmp(" ", move.lowMiddle, sizeof(move.lowMiddle)-1) == 0) {
            printf("Do you want to place %s in low middle? (y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.lowMiddle, turn);
                continue;
            }
        }
        if (strncmp(" ", move.lowRight, sizeof(move.lowRight)-1) == 0) {
            printf("Do you want to place %s in low right(y/n): ", turn);
            scanf("%s", &reply);
            if (strncmp("y", reply, sizeof(reply)-1) == 0) {
                strcpy(move.lowRight, turn);
                continue;
        }
        }
    }

    return 0;
}