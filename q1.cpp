/*  Name-Kashish 
	rollno.-2010991411
	SetNo.-3
	Q no.1 --->Rearrange an array with alternate high and low

*/
  
#include <iostream>

using namespace std;
 
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
void rearrangeArray(int arr[], int n)
{

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i - 1] > arr[i]) {
            swap(arr, i - 1, i);
        }
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr, i + 1, i);
        }
    }
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
 
    rearrangeArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout<< arr[i]<<" ";
    }
 
    return 0;
}

