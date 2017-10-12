#include<stdio.h>
#include<cmsc257-s17-assign1-support.h>

int floatArrayToInt(int *iArray, float *fArray, int size){
    int i;
    for(i = 0; i < size; i++){
        *(iArray+i)=(int)*(fArray+i);
        myabs((iArray+i));
    }
    return 0;
}

int myabs(int *num){
    if(*num < 0){
        *num -= 1;
        *num = *num ^ 0xffffffff;
    }
    *num = *num & 0xf;
    return 0;
}

int float_display_array(float *arr, int size){
    int i;
    for(i=0;i<size;i+=2){
        printf("%.3f\t%.3f\n", *(arr+i),*(arr+i+1));
    }
    return 0;
}

int integer_display_array(int *arr, int size){
    int i;
    for(i=0;i<size;i+=2){
        printf("%d\t%d\n", *(arr+i),*(arr+i+1));
    }
    return 0;
}

int countBits(int num){
    int count = 0;
    while(num != 0){
        if((num & 0x1) == 1){
            count++;
        }
        num = num>>1;
    }
    return count;
}

int printBitCount(int *arr, int size){
    if((size < 1) | (arr == NULL)){
        return -1;
    }
    int i;
    for(i = 0;i<size;i++){
        printf("%d\n", countBits(arr[i]));    
    }
    return 0;
}

// Send the array to sort, the index of the first item to sort and the 
// index of the last array to sort. This will be called recursively
void integerQuickSort(int* arr, int s, int e){
    if(s < e){
        int k = partition(arr, s, e);
        integerQuickSort(arr, s, k);
        integerQuickSort(arr, k+1, e);
    } 
}

int partition(int* arr, int s, int e){
    int pivot = *(arr+s);
    int i = s - 1;
    int j = e + 1;
    while(1){
        do{
            i += 1;
        }while(*(arr+i) < pivot);
        do{
            j -= 1;
        }while(*(arr+j) > pivot);
        if ( i >= j){
            return j;
        }
        swap((arr+i),(arr+j));
    }
}

void swap(int* a, int* b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
