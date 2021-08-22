#include <iostream>

using namespace std;

void printArray(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout << arr [i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len-i; j++){
            if((arr[j] < arr[j+1]) || (arr[j] == arr[j+1])){
                //condition is true: do nothing
            } else {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                printArray(arr, len);
            }
        }
    }
}

int main(){
    int A[] ={5,3,4,6,4,2};
    int n = sizeof(A)/sizeof(A[0]);
    //cout << "Size of array is: " << n << endl;
    printArray(A, n);
    bubbleSort(A,n);
    return 0;
}
