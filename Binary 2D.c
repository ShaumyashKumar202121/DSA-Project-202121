#include<stdio.h>

int main()

{


int a,b,c,d,x,flag = 0;

printf("How Many Number of rows \n");
scanf("%d", &c);

printf("How Many Number of columns \n");
scanf("%d", &d);

int arr[i][j];

printf("Enter The elements\n");
for (i = 0; i < c; i++)
{
    for (j = 0; j < d; j++)
    {
      scanf("%d", &arr[i][j]);
    }
}

printf("What letter are you looking for? ");
scanf("%d", &x);


for (i = 0; i < c; i++)
{
    for (j = 0; j < d; j++)
    {
        if (arr[i][j] == x)
        {
           printf("%d is present at (%d , %d) times in array.\n", x, c, ds);
           flag = 1;
        }
    }
}

if (flag == 0)
    printf("%c is not present in array.\n", x);

return 0;
}
