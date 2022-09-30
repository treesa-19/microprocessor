#include<stdio.h>
#include<stdlib.h>
struct fcfs

{
	int pid;
	int btime;
	int wtime;
	int ttime;
}

	p[10];
	int main()
	{
	int i,n;
	int totwtime=0,totttime=0;
	printf("\n FCFS SCHEDULING...\n");
	printf("Enter the num of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	p[i].pid=1;
	printf("\n Burst time of the process:");
	scanf("%d",&p[i].btime);
	}
	p[0].wtime=0;
	p[0].ttime=p[0].btime;
	for(i=0;i<n;i++)
	{
	p[i].wtime=p[i-1].wtime+p[i-1].btime;
	p[i].ttime=p[i].wtime+p[i].btime;
	totttime+=p[i].ttime;
	totwtime+=p[i].wtime;
	}
	printf("\n Total waiting time:%d",totwtime);
	printf("\n Average waiting time:%d",totwtime/n);
	printf("\n Total turn around time:%d",totttime);
	printf("\n Average turn around time:%d",totttime/n);
	printf("\n");
	printf(" ________________________\n");
	printf("|0 ");
	for(i=0;i<n;i++)
	{
	printf("p%d  %d|",i,p[i].ttime);
	
	}printf("\n");
	printf("_________________________");
	}
	
	
	
