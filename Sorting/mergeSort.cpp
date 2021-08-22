#include <iostream>

using namespace std;

void printArray(int *arr, int len){
    for(int i = 0; i < len; i++){
        cout << arr [i] << " ";
    }
    cout << endl;
}

void merge(int *left, int *right, int *arr, int len){
    int leftLength, rightLength, i, j, k; 
    leftLength = len/2;
    rightLength = len%2 + len/2;
    i = j = k = 0;
    
    while(i < leftLength && j < rightLength){
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < leftLength){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < rightLength){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void sort(int *arr, int len){
    if(len < 2) {
        return;
    }
    const int mid =  (len/2);
    int* L = new int [mid];
    int* R = new int [mid];
    int i = 0;
    for( i = 0; i < mid; i++){
        L[i] = arr[i];
    }
    for( int j = 0; j < mid+(len%2) ; j++){
        R[j] = arr[mid+j];
    }
    sort(L,mid);
    sort(R,mid+(len%2));
    merge(L,R,arr,len);
    delete[]L;
    delete[]R;
}

int main()
{
    int A[] = {5,3,4,0,2,1};
    int n = sizeof(A)/sizeof(A[0]);
    sort(A,n);
    printArray(A,n);
    return 0;
}
