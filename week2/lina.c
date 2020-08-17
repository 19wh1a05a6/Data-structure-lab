#include<stdio.h>
int linear_search(int n, int a[7],int key)
{
	int pos = -1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		pos=i;
		break;
		}
	}
	return pos;	
}
int main()
{
	int i, key, pos, n , a[7];
	scanf("%d",&n);
	for( i = 0; i<n ; i++)
	scanf("%d",& a[i]);
	scanf("%d",& key);
	pos = linear_search(n,a,key);
	if(pos==-1)
	printf("element not present");
	else
	printf("element present at %d", pos+1);
}