#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    printf("\nEnter the no of columns: ");
    scanf("%d", &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Orignal matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}