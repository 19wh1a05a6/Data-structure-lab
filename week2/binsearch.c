#include<stdio.h>
int bin_search( int first,int last ,int a[30], int key)
{
	int pos = -1, mid;
	if(first<=last)
	{
		mid = (first+last)/2;
		if(a[mid] == key)
			return mid;
		else if(a[mid] < key)
			bin_search(mid + 1,last,a,key);
		else
			bin_search(first,mid -1,a,key);
	}	
	return pos;

}
int main()
{
	int n, a[50] , key ,i ,  pos ;
	scanf("%d", &n);
	for(int i = 0; i < n ;i++);
	{
		scanf("%d", &a[i]);

	}
	scanf("%d", &key);
	pos = bin_search(0,n-1,a,key);
	if (pos == -1)
	{
		printf(" element is not present\n");
	}
	else
	{
		printf("element is present at %d" , pos + 1);
	 }
}	 
	