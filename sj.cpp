# include <stdio.h>

void swap(int *a,int*b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int n,i;
	printf("Enter no of processes: ");
	scanf("%d,&n");
	int p_id[n],at[n],bt[n],wt[n],tat[n],ct[n];
	printf("Enter the arrival time and burst time of the processes.\n");
	for( i=0;i<n;i++)
	{
		p_id[i]=i+1;
		printf("\nArrival time of process %d : ",p_id[i]);
		scanf("%d",&at[i]);
		printf("\nBurst time of process %d : ",p_id[i]);
		scanf("%d",&bt[i]);
		
	}
	double awt=0.0,atat=0.0;
	
	for( i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(at[j]>at[j+1]||(at[j]==at[j+1]&&bt[j]>bt[j+1]))
			{
				swap(&p_id[j],&p_id[j+1]);
				swap(&at[j],&at[j+1]);
				swap(&bt[j],&bt[j+1]);
			}
		}
	}
	ct[0]=at[0]+bt[0];
	tat[0]=ct[0]-at[0];
	wt[0]=tat[0]-bt[0];
	
	for( i=1;i<n;i++)
	{
		ct[i]=(ct[i-1] > at[i] ? ct[i-1] : at[i])+bt[i];
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
	}
	
	printf("\nProcess id\tArrival Time\tBurst time\tcompletion time\tWaiting time\tturnaround time\n\n");
	for( i=0;i<n;i++)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",p_id[i],at[i],bt[i],ct[i],wt[i],tat[i]);
		awt+=wt[i];
		atat+=tat[i];
	}
	printf("Average waiting time :%lf",awt/n);
	printf("Average turnaround time :%lf",atat/n);
	
	return 0;
}
