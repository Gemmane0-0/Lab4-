#include "DisplayArr.h"


/**
 * @brief Construct a new Display:: Display object
 *
 */
DisplayArr::DisplayArr(){
}
/**
 * @brief prints the integers in the arr
 *
 * @param arr
 * @param size
 */
void DisplayArr::printArray(const int * arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

/**
 * @brief returns the memory size of the array
 *
 * @param arr
 * @param size
 * @return float
 */
int DisplayArr::getArrMemSize(const int arr[], int size){
    int mem_size = 0;
    for (int i = 0; i < size; i++){
        mem_size += sizeof(arr[i]);
    }
    return mem_size;
}
/**
 * @brief returns pointer to the address of an element in arr at the index-th
 *
 * @param arr
 * @param index
 * @return const int*
 */
const int * DisplayArr::getAddress(int arr[], int index){
    int* addr =  &arr[index];
    return addr;
}

/**
 * @brief prints the total size of the arr and the memory locations of the
 * first, second, and last element in arr
 *
 * @param arr
 * @param size
 */
void DisplayArr::printMetaArray(int arr[], int size){ // what happens when Display:: is removed?
    int mem_size = getArrMemSize(arr, size);
    int int_size = sizeof(arr[0]);
    printf("Array has %i number of integers. Each integer is worth %i bytes, totaling up to %i bytes of memory.\n", size, int_size, mem_size);
    printf("Element at index %i is located at (%p)\n", 0, getAddress(arr, 0));
    printf("Element at index %i is located at (%p)\n", 1, getAddress(arr, 1));
    printf("Element at index %i is located at (%p)\n", size-1 ,getAddress(arr, size-1));

}
