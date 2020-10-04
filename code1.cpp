#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,k;
	i = 0
	while(i<10)
	{
		cin>>a[i];
		i++
	}
	k = 0
	while (k<10)
	{
			for(i=0;i<4;i++)
	{
		j=a[i];
		if(a[i]>a[i+1])
		{
			a[i]=a[i+1];
			a[i+1]=j;
		}
	}
		k++
	}
	for(i=0;i<5f;i++)
	{
		cout<<a[i]<<" ";
	}
}
