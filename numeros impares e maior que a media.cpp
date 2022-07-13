#include <stdio.h>
int main()
{
	int i;
	float soma, M;
	int v[6];
	printf("descreva os valores do vetor:\n ");
	for(i=0 ;i<=5 ;i++){
		scanf("%d", &v[i]);
	}
	printf("os elementos impares digitados sao:");
	for(i=0 ;i<=5; i++){
		if((v[i]%2)!=0){
			printf("%d", v[i]);
		}
	}
	printf("\n");
	for(i=0 ;i<=5; i++){
	soma=soma+v[i];
	}
	printf("A soma dos valores no vetor eh:%.2f",soma);
		printf("\n");
	M=(soma/6);
	printf("a media eh:%.2f", M);
		printf("\n");
	printf("os elementos maiores que a media eh:");
	
		for(i=0 ;i<=5; i++){
		if(M<v[i]){
			printf("%d \n",v[i]);
		}
		}
}
