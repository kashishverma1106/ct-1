/*  Name-Kashish 
	rollno.-2010991411
	SetNo.-3
	Q no.2 --->find a pair with the given sum in an array

*/
#include <iostream>
#include <algorithm>
using namespace std;

void findsumarr(int arr[], int n, int target)
{
    sort(arr, arr + n);
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == target)
        {
            cout << "Pair found (" << arr[low] << ", " << arr[high] << ")\n";
            return;
        }
 
        (arr[low] + arr[high] < target)? low++: high--;
    }
    cout << "Pair not found";
}
 
int main()
{
	int n;
	cout<<"enter size of array ";
	cin>>n; 
    int arr[n]; 
    cout<<"\nEnter values in array ";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    int target ;
    cout<<"\nEnter target value ";
    cin>>target;

    findsumarr(arr, n, target);
 
    return 0;
}
