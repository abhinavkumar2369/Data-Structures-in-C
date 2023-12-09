#include<stdio.h>

// Function to perform Linear Search
void linear_search(int *arr, int element){
    int count = 0 ;
    for (int i=0 ; i<sizeof(arr) ; i++){
        if (arr[i] == element){
            printf("Element found at postion %d  \n ", i+1);
            count=1;
        }
    }
    if (count==0){
        printf("Element not found");
    }
    return;
}

int main(){
    int size = 0;
    int element;

    // Number of Elements in a Array
    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    // Array Declaration
    int array[size];

    // Array Input
    for (int i=0 ; i<size ; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    // Element to be searched
    printf("Enter element to be searched: ");
    scanf("%d", &element);

    linear_search(array,element);
}