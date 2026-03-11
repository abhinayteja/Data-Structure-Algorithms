#include <stdio.h>

int main(){
    int n;
    printf("Eneter the No Elements : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Eneter the Element  arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    // SELECTION SORT
    int min,temp;
    for(int i = 0; i < n; i++){
        min = i;
        for (int j = i+1; j < n; j++) // Why do we keep the j = i + 1 ---> "We do compare the all other elements with this index element"
        {
            if (arr[j] < arr[min])
            {
                min = j; // assing the j to the min 
            }

        }
        // Now swap the both the elements 
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]");
    return 0;
}