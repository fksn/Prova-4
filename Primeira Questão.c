#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Twitter
{
    int num_likes, num_ret, num_men;
} twitter;
int main()
{
    twitter ** mat = NULL;
    int i, j, n;
    scanf("%d", &n);
    mat = (twitter*) malloc(sizeof(twitter) * n * n);
    if (mat == NULL)
    {
        exit(1);
    }
    
    for (i=0; i < n; i++)
    {
        for (j=0; j < n; j++)
        {
            scanf("%d", &((*mat[i][j]).num_likes));
        }
    }
    free (mat) ;
    return 0;
}
