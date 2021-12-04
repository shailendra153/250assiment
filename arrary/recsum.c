#include <stdio.h>
int sum(int arr[], int start, int len) 
{
    if(start >= len)
        return 0;
         return (arr[start] + sum(arr, start + 1, len));
}
int main()
{
    int arr[50];
    int N, i, sumarray;
    
    
    /* Input size and elements in array  */
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    sumarray = sum(arr, 0, N);
    printf("Sum of array elements: %d", sumarray);
    
    return 0;
}
