/*In this code we discover a method to sort an array.
Here we use two arrays, one for input and one for displaying sorted array.
This is compile time and to make it run time follwing code snippet can be used.
     cout<<"Enter "<<n<<" numbers in array :\n ";
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>ele;
		a[i]=ele;
	}
*/


#include<iostream>
using namespace std;
int main()
#define n 10
{
    int a[]={3,10,109,25,9,6,54,2,53,8},b[n];
	int i,p,j,t;
	for(i=0;i<n;i++)
	{
		p=0;
		for(j=0;j<n;j++)
		{
			if (a[i]>a[j])
			p++;
		}
		b[p]=a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<b[i]<<"|";
	}
	return 0;
}