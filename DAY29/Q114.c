#include <stdio.h>

int main()
{
    int arr[100], n, i, choice;
    int sum = 0, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n1. Display Array");
        printf("\n2. Sum of Elements");
        printf("\n3. Maximum Element");
        printf("\n4. Minimum Element");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];
                printf("Maximum = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] < min)
                        min = arr[i];
                printf("Minimum = %d\n", min);
                break;
        }

    } while(choice != 5);

    return 0;
}