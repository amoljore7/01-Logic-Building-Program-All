#include<stdio.h>
#include<string.h>
void swap(char*,char*);

void permutation(char *s, int i, int n)
{
	static int count;
	int j;
	if(i==n)
	{
		count++;
		printf("(%d)%s\t\n",count,s);
	}
	else
	{
		for(j=i;j<=n;j++)
		{
			swap((s+i),(s+j));
			permutation(s,i+1,n);
			swap((s+i),(s+j));
			}	
	}
}

void swap(char *x,char *y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}


int main()
{
	char str[30]={'\0'};
	
	printf("Enter A String : ");
	scanf("%[^'\n']s",str);
	
	permutation(str,0,strlen(str)-1);
	
	return 0;
}


