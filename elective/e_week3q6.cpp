#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define INTERVAL 1000
int main()
{
	double ran_x,ran_y,origin_d,pi;
	int circle_count=0,square_count=0,i;
	srand( time(NULL) );
	for(i=0;i<(INTERVAL*INTERVAL);i++)
	{
		ran_x=(double)rand()/RAND_MAX;
		ran_y=(double)rand()/RAND_MAX;
		origin_d=ran_x*ran_x+ran_y*ran_y;
		
		if(origin_d<=1)
		circle_count++;
		
		square_count++;
		
		
	}
	pi = (double)circle_count/square_count*4;
	printf("The estimated value of pie by monte  carlo method is found to be %lf",pi);
	return 0;
}
