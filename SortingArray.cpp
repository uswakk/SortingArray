//soritng algorithms
#include <iostream>
using namespace std;

void bubbleSort(int* a, int n);
void insertionSort(int* a, int n);
void selectionSort(int* a, int n);

int main()
{
    int arr[5]; 
    cout << "Enter elements of the array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << endl << "Your array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    //bubbleSort(arr, 5);
    //insertionSort(arr, 5);
    selectionSort(arr, 5);

    cout << endl << "Sorted Array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }


    return 0;
}

void bubbleSort(int* a, int n)
{
    //sorts in ascending order//
    int temp;
    bool flag; 

    for (int i = 0; i < n - 1; i++)
    {
        flag = 0; //checks for swapping 
        for (int j = 0; j < n - 1 - i; j++) //subtracting index i makes it more efficient
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1; //1 if swapped 

            }
        }
        if (flag == 0)
            break;
    }

 
}

void insertionSort(int* a, int n)
{
    //sorts in ascending order
    int temp;
    int j;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1; //sorted array
        
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j]; //moves element at j to right
            j--;
        }

        a[j + 1] = temp; //insert at jth element of sorted list
        
        

    }
}

void selectionSort(int* a, int n)
{
    int min;
    int temp; //for swapping
    for (int i = 0; i < n - 1; i++)
    {
        min = i; //first index of unsorted array
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j; //update index of minimum variable 
            }
        }

        if (min != i) //updaing the sorted list 
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp; 
        }
    }
}