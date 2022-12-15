#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <vector>
using namespace std;

//problem 8.

//string reverse(string arr, int size){
//    if(size < 0){
//        return arr[0]+" ";
//    }
//
//    return arr[size-1] + reverse(arr, size - 1);
//
//}

//problem 11.
  
//void reverseArr ( int arr[] , int num, int size)
//{
//    // check the size of array
//    if (num == size)
//        return;
//
//    // extract array elements
//    int elem = arr [num];
//
//    // recursively calls the next element of the array
//    reverseArr ( arr, num + 1, size);
//    // assigning elements
//    arr [size - num - 1] = elem;
//}

//problem 12.

//void printArray(int arr[], int size)
//{
//    for(int i = 0; i < size; i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void bubbleSort(int arr[], int size)
//{
//    for(size_t i = 0; i < size; i++)
//    {
//        for(int j = 0; j < size - 1; j++)
//        {
//            if(arr[j] > arr[j+1])
//            {
//                printArray(arr, size);
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//}

//problem 13

//int occur(int arr[], int size, int x){
//    int ctr = 0;
//
//    for(int i = 0; i < size; i++){
//        if(arr[i] == x){
//            ctr++;
//        }
//    }
//    return  ctr;
//}

//problem 14

//void printArr(int arr[], int size){
//
//    for(int i = 0; i < size; i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void sortArr(int arr[], int size){
//
//    for(int i = 0; i < size; i++)
//    {
//        for(int j = 0; j < size-1; j++)
//        {
//            if(arr[j] > arr[j+1]){
//                printArr(arr, size);
//                swap(arr[j], arr[j+1]);
//            }
//
//        }
//    }
//
//}




int main() {
    
//    Problem 8.  ---------------------------------|
    
//    string arr;
//    cin >> arr;
//
//    string arr_r;
//
//    cout << reverse(arr, arr.length());
    
    
//    Problem 9. ---------------------------------|
    
//    int size;
//    cin >> size;
//
//    int arr_1[size];
//    int arr_2[size];
//
//    for(int i = 0; i < size; i++){
//        cin >> arr_1[i];
//
//    }
//
//    for(int j = 0; j < size; j++){
//        arr_2[j] = arr_1[j];
//    }
//
//    for(int j = 0; j < size; j++){
//        cout << arr_2[j] << " ";
//    }
    
    
//    Problem 10. ---------------------------------|
    
//    int size;
//    cin >> size;
//
//    int arr[size];
//
//    for(int i = 0; i < size; i++){
//        cin >> arr[i];
//    }
//
//    for(int j = size-1; j >= 0; j--){
//        cout << arr[j] << " ";
//    }
    
    
//    Problem 11. ---------------------------------|
    
//    // initialize array
//    int arr[] = { 20, 34, 5, 8, 1, 78};
//
//    // size of the array
//    int size = sizeof( arr) / sizeof (arr[0]);
//
//    // call recursive function (start from first elements
//    cout << " Original elements of the arrays " << endl;
//
//    for (int i = 0; i < size; i++)
//        {
//            cout << arr[i] << " ";
//        }
//
//    reverseArr (arr, 0, size);
//    cout << " \n Reverse elements of the array are: " << endl;
//        // display the array elements
//    for (int i = 0; i < size; i++)
//        {
//            cout << arr[i] << " ";
//        }
//
//    cout << endl;
    
//    Problem 12. ---------------------------------|
    
//    int size;
//    cin >> size;
//
//    int arr[size];

//    int arr[] = {4, 8, 12, 39, 5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    for(int i = 0; i < size; i++){
//        cin >>arr[i];
//    }
//
//
//    bubbleSort(arr, size);
//
//    printArray(arr, size);
    
//    Problem 13. ---------------------------------|
    
//    int x = 2;
//
//    int arr[] = {1, 1, 2, 2, 2, 2, 3};
//    int size = sizeof(arr)/sizeof(arr[0]);
//
//    cout << occur(arr, size, x);
//
//    cout << endl;
    
//    Problem 14. ---------------------------------|
    
//    int size;
//    cin >> size;
//
//    int arr[size];
//
//    for(int i = 0; i < size; i++){
//        cin >> arr[i];
//    }
//
//    sortArr(arr, size);
//
//    printArr(arr, size);
    
//    Problem 15. ---------------------------------|
    
//    const size_t row = 4;
//    const size_t column = 2;
//
//    array<array<int, column>, row> arr;
//
//    for(int i = 0; i < row; i++){
//        for(int j = 0; j < column; j++){
//            cin >> arr[i][j];
//        }
//    }
//
//    for(int x = 0; x < row; x++){
//        for(int y = 0; y < column; y++){
//            cout << arr[x][y] << " ";
//        }
//        cout << endl;
//    }
  
//    Problem 16. ---------------------------------|
    
    const size_t row = 2;
    const size_t column = 2;
    int size = row * column;
    
    array<array<int, column>, row> arr;
    
        for(int r = 0; r < row; r++){
            for(int c = 0; c < column; c++){
                cout << "[" << r+1 << "] [" << c+1 << "]: ";
                cin >> arr[r][c];
            }
        }


        for(int r = 0; r < row; r++){
            for(int c = 0; c < column; c++){
                cout << arr[r][c] << " ";
            }
            cout << endl;
        }
        
    
    return 0;
}
