#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int n, int arr[][n])
{
    int l_diagonal_sum = 0, r_diagonal_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                l_diagonal_sum += arr[i][j];
            }

            if ((i + j) == (n - 1))
            {
                r_diagonal_sum += arr[i][j];
            }
        }
    }

    return abs(l_diagonal_sum - r_diagonal_sum);
}

int main()
{
    int arr[4][4] = {{9, 2, 3, 4}, {5, 6, 7, 8}, {1, 2, 3, 4}, {5, 6, 7, 8}};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = diagonalDifference(size, arr);

    printf("Result is %3d \n", res);

    return 0;
}