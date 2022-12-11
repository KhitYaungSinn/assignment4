#include<stdlib.h>// w 119,i 105,n 110,h 104,t 116,u 117,t 116
#include<stdio.h>
#include<string.h>
void readFile();
int arr[7];
int name[7]={119,105,110,104,116,117,116};
int main()
{
	if(arr[7]==name[7])
	{
		printf("True");
	}
	readFile();
	return 0;
}
void readFile()
{
	FILE *ptr;
	ptr=fopen("ass4.txt","r");
	int count =0;
	int i=0;
	char c=fgetc(ptr);
	while(!feof(ptr))
	{
		arr[i]=c;
		c=fgetc(ptr);
		i++;
		if(i==7)
		{
			int id1=0,k;
			for( k=0;k<7;k++)
			{
				if(arr[k]==name[k])
				{
					id1++;
				}
			}
			if(id1==7)
			{
				count++;
			}
		}
		else
		{
			i=0;
		}
	}
	fclose(ptr);
	printf("number of winhtut : %d",count);
}



