#include <stdio.h>
int main()
{
	float temp1;
	float temp2;
	float temp3;
	float cel1,cel2,cel3;
	int i,v[3];
	i=0;
			printf("Digite a 1 temperatura: ");
			scanf("%f", &temp1);
	for(i=0;i<2;i++){}
	for(i=0 ;i<2; i++){}	
			printf("Digite a 2 temperatura: ");
			scanf("%f", &temp2);
	for(i=0 ;i<2; i++){}
			printf("Digite a 3 temperatura: ");
			scanf("%f", &temp3);
		cel1=(temp1-32)/1.8;
		printf("temperatura 1 em celcius eh: %.2f", cel1);
		printf("\n");
		cel2=(temp2-32)/1.8;
		printf("temperatura 2 em celcius eh: %.2f", cel2);
		printf("\n");
		cel3=(temp3-32)/1.8;
		printf("temperatura 3 em celcius eh: %.2f", cel3 );
printf("\n");
return 0;
}
