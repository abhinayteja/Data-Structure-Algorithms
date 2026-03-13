#include <stdio.h>

int main()
{
    int n;
    printf("Eneter the No Elements : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Eneter the Element  arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // Inserstion Sort KNOW 
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--) // The ja points to the particular location and traverse through the backward
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}