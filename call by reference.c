#include <stdio.h>

void doubleValues(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        *(ptr + i) = *(ptr + i) * 10;    //pro line bro this one , remember this logic.............
        printf("%d ",*(ptr+i));
    }
}

int main() {
    int arr[3] ={5, 10, 15};

    doubleValues(arr,3);


    //for (int i = 0; i < 3; i++) {
        //printf("%d ", arr[i]); // Output: 10 20 30

    return 0;
}
