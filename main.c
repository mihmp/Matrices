#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5];
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            matrix[i][j] = 0;
        }
    }

    printf("Matriz:\n");
    for (size_t i = 0; i < 5; i++){
        for (size_t j = 0; j < 5; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}