#include <stdio.h>
int main()
{
	int i;
	int v1[6];
	int v2[3];
	int v3[3];
	printf("digite 6 numeros para o vetor: \n");
	for(i=0;i<=5; i++ ){
		scanf("%d", &v1[i]);
	}
	for(i=0;i<=2; i++){
		v2[i]=v1[i];
		v3[i]=v1[i+3];
	}
	printf("o vetor 2 eh: \n");
	for(i=0;i<=2; i++ ){
		printf("%d\n", v2[i]);
	}
	printf("\n");
	printf("o vetor 3 eh: \n");
	for(i=0;i<=2; i++ ){
		printf("%d\n", v3[i]);
}
return 0;
}
