#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	char	a='A';
	short	b=38;
	float	c=10.4f;
	int 	d=12;
	double	e=8.4;	

	printf("a-sum:%f,size:%ld\n",a*(b*c)+(d/e),sizeof(a*(b*c)+(d/e)));
	printf("b-sum:%f,size:%ld\n",a-(b*c)+d-e,sizeof(a-(b*c)+d-e));
	printf("c-sum:%f,size:%ld\n",d+(b+c)+a*(d*a),sizeof(d+(b+c)+a*(d*a)));
	printf("d-sum:%d,size:%ld\n",5-(a+b)/4,sizeof(5-(a+b)/4));
		
	return 0;

}
