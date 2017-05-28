#include <iostream>
#include <ctime>

using namespace std;
const long max_length = 120000;
int arr[max_length];
long length=100000;
void bubbleSort()
{
    int temp;
    for(long i = 0; i < length; i++)
    {
        for(long j = 0; j < length-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertionSort()
{
    int temp;
    for(long i = 1; i < length; i++)
    {
        long j;
        temp = arr[i];
        for(long j = i-1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

void selectionSort()
{
	long n,min1,temp;

	for (int i=0; i < n-1; i++)
	{
	    min1 = i;
		for (int j=i+1; j < n; j++)
		{
		if (arr[j] < arr[min1])
                  min1= j;

            if (min1!= i)
            {
                 temp = arr[i];
                 arr[i] = arr[min1];
                 arr[min1] = temp;
            }
	}
}
}
int main()
{
    double t1, t2;
    long x,y;

        t1 = clock();
        bubbleSort();
        t2 = clock();
        cout << "Bubble Sort: " << (t2 - t1)/CLK_TCK << " sec\n";

        t1 = clock();
        insertionSort();
        t2 = clock();
        cout << "Insertion Sort: " << (t2 - t1)/CLK_TCK << " sec\n";

        t1 = clock();
        selectionSort();
        t2 = clock();
        cout << "Selection Sort: " << (t2 - t1)/CLK_TCK << " sec\n";



    return 0;
}
