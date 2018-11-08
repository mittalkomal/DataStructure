/*Exp 9
Write a program to accept N numbers in an array, and then sort the array using Quick Sort.
*/
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{int t=*a;
*a=*b;
*b = t;
	
}

int part(int *a,int low,int high)
{
	int pivot,index,curr;
	index=low;
	pivot=high;
	for(int i=low;i<=high-1;i++)
	{
		if(a[i]<=a[pivot])
		{	
			swap(&a[i],&a[index]);
		index++;
		}
	}
	swap(&a[index],&a[pivot]);
	return index;
}
void quickSort(int *a,int low,int high)
{
	int t;
	if(low<high)
	{
		t=part(a,low,high);
		quickSort(a,low,t-1);
		quickSort(a,t+1,high);
		
	}
}
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	quickSort(arr,0,n-1);
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
	return 0;
}
