#include <stdio.h>
#include <string.h>

int main() {
    char Fname[2][10][30];
    int i, j;
    strcpy(Fname[0][0], "John");
    strcpy(Fname[1][0], "cena");
    strcpy(Fname[0][1], "Brock");
    strcpy(Fname[1][1], "lesner");
    strcpy(Fname[0][2], "roman");
    strcpy(Fname[1][2], "reings");
    for (i = 0; i < 1; i++)
     { 
        for (j = 0; j < 3; j++) 
        {
            if (Fname[0][j][0] == '\0')
            {
                break;
            }
            printf("%s %s\n", Fname[0][j], Fname[1][j]);
        }
    }
    return 0;
}