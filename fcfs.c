#include<stdio.h>
int main()
{
	int n,c=0,avbt=0,avtt=0;
	printf("enter no of process: ");
	scanf("%d",&n);
	int bt[n];
	char p[n][2];
	printf("---------------------------process---------------------------------\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter process name %d:",i+1);
		scanf("%s",&p[i]);
	}
	printf("--------------------------burst_time----------------------------\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter burst time for %c :",p[i][0]);
		scanf("%d",&bt[i]);
		avtt+=bt[i];
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		printf("|  %c  ",p[i][0]);
				
	}
	printf("|\n%d",c);
	for(int i=0;i<n;i++)
	{
		avbt+=c;
		avtt+=c;
		c=c+bt[i];
		printf("    %d",c);
		
	}
	printf("\n\n----------------------------------------------------------------\n");
	printf("Average burst_time= %d\n",avbt/n);
	printf("Average Turn_Around_time= %d",avtt/n);
}
