#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float mass_mol = 3.0e-23;
	float mass_litre = 1000;
	float litres;
	float molecules;
	printf("Enter the numer of litre of water:");
	scanf("%f", &litres);
	molecules = litres * mass_litre / mass_mol;
	printf("%f litres of water contaun %e molecules.\n", litres, molecules);
	return 0;
}