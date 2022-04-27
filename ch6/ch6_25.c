#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int years=1900;
	int detect100_1,detect100_2,detect100_3;
	int detect4000_1,detect4000_2;
	
	
	leap_years:	
		detect100_1=(years/4)/25;
		detect100_2=(years/4)%25;
		detect100_3=years%400;
		detect4000_1=(years/4)/1000;
		detect4000_2=(years/4)%1000;
	if(years<=2000)
	{

		if(years%4 !=0)
		{
			//printf("%d is not leap years\n",years);
		}
		else
		{
		       	if(detect100_1>=1 && detect100_2==0 && detect100_3!=0)
			{
			//	printf("%d is not leap years\n",years);
			}	
			else
			{
				if(detect4000_1>=1 && detect4000_2==0)
				{
			//		printf("%d is not leap years\n",years);
				}
				else
				{
					printf("%d is leap years\n",years);
				}
			}
		}
		years++;
		goto leap_years;
	}


	return 0;
}
