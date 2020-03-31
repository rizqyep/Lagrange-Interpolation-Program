#include <stdio.h>
int main()
{
    float x[100], y[100], a, s = 1, t = 1, k = 0;
    int n, i, j, d = 1;

    printf("\n\n Enter the number of data: ");
    scanf("%d", &n);

    printf("\n\n Input X and Y separated by a space: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
        scanf("%f", &y[i]);
    }

    printf("\n\n You Inputted  :\n\n");
    printf("X\tY");

    for (i = 0; i < n; i++)
    {
        printf("%0.3f\t%0.3f", x[i], y[i]);
        printf("\n");
    }

    while (d == 1)
    {

        printf(" \n\n\n Input X to find matching Y value: \n\n\n");
        scanf("%f", &a);
        for (i = 0; i < n; i++)
        {
            s = 1;
            t = 1;
            for (j = 0; j < n; j++)
            {
                if (j != i)
                {
                    s = s * (a - x[j]);
                    t = t * (x[i] - x[j]);
                }
            }
            k += ((s / t) * y[i]);
        }
        printf("\n\n The value of Y is %f with inputted X of ", k, a);
        printf("\n\n Enter 1 to continue, enter another number to exit");
        scanf("%d", &d);
    }
}
