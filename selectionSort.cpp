#include <iostream>

using namespace std;

void printArray(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout << arr [i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int len){
    for(int i = 0; i < len; i++){
        int min_index = i;
        for(int j = i+1; j < len; j++){
            if((arr[i] < arr[j]) || (arr[i] == arr[j])){
                //condition is true: do nothing
            } else {
                char swapped[] = { ' ', ' ', ' ', ' ', ' ', ' ', '\0' };
                int temp = arr[i];
                min_index = j;
                arr[i] = arr[min_index];
                arr[j] = temp;
                swapped[i] = '^';
                swapped[j] = '^';
                printArray(arr, len);
                for(int k = 0; k < len; k++){
                    cout << swapped [k] << " ";
                }
                cout << endl;
                
            }
        }
        
    }
}

int main()
{
    int A[] ={5,3,4,4,1,2};
    int n = sizeof(A)/sizeof(A[0]);
    //cout << "Size of array is: " << n << endl;
    printArray(A, n);
    selectionSort(A,n);
    return 0;
}