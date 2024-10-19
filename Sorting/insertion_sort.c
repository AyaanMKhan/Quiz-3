#include <stdio.h>

void insertionSort(int arr[], int n){

    int i, item, j;
    //i starts from 1 so that we can compare it with item at 0. See, j starts from i-1 in the next loop.
    for (i = 1; i < n; i++) {
        item = arr[i]; 
    //take this item in hand
    /* Move elements of arr[0..i-1], that are
    greater than key, to one position ahead
    of their current position */
        for(j=i-1; j>=0; j--){
            if(arr[j]>item)
                arr[j+1] = arr[j]; //shift the item
            else
                break; //it means arr[j] is already in correct place and all its
                //previous items are already sorted in reference to the item in your hand
        }
        arr[j+1] = item; //put the item in its correct place
    }
}




/* Function to print an array */
void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    insertionSort(arr, n);
    printf("Sorted array: \n");

    printArray(arr, n);
    return 0;
}

