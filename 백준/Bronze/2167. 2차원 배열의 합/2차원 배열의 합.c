#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int X[N][M], i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &X[i][j]);
        }
    }
    int k, x, y;
    scanf("%d", &k);
    for (int h = 0; h < k; h++)
    {
        scanf("%d %d %d %d", &i, &j, &x, &y);
        i--;
        j--;
        x--;
        y--;
        int sum = 0;
        for (int q = i; q <= x; q++)
        {
            for (int w = j; w <= y; w++)
            {
                sum += X[q][w];
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}