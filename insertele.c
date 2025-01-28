// WAP to insert an element at desired or specific position in an array

#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the element of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("the given array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    int p,new_e;
    printf("Enter the position to insert an array\n");
    scanf("%d",&p);
    
    printf("enter the element:\n");
    scanf("%d",&new_e);

    for ( int i = 0; i < n; i++)
    {
        if(i==(p-1)){
            arr[i]=new_e;
        }
    }

    printf("the given array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}