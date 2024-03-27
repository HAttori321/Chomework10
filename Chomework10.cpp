#include <iostream>


using namespace std;


int main() {

    //Task1

    /*int arr1[5] = { 1, 2, 3, 4, 5 };
    int arr2[5] = { 0 };

    int* ptr1 = arr1;
    int* ptr2 = arr2;

    for (int i = 0; i < 5; i++) 
    {
        *(ptr2 + i) = *(ptr1 + i);
    }
    cout << "Array 1 : ";
    for (int i = 0; i < 5; i++) 
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Array 2 : ";
    for (int i = 0; i < 5; i++) 
    {
        cout << arr2[i] << " ";
    }
    cout << endl;*/

    //Task2

    /*int arr[5] = { 1, 2, 3, 4, 5 };
    int* ptr = arr;
    int* ptrEnd = arr + 4;

    while (ptr < ptrEnd) 
    {
        int temp = *ptr;
        *ptr = *ptrEnd;
        *ptrEnd = temp;
        ptr++;
        ptrEnd--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << arr[i] << " ";
    }*/

    //Task3

    int arr1[5] = { 1, 2, 3, 4, 5 };
    int arr2[5] = { 0 };

    int* ptr1 = arr1;
    int* ptr2 = arr2 + 4;

    for (int i = 0; i < 5; i++) 
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2--;
    }
    cout << "Array 1: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Array 2: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << arr2[i] << " ";
    }
}
