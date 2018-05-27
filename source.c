#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      int num=1;
	printf("Ingrese un Numero:");
	fflush(stdout);
	scanf("%d", &num);
	int tot = num + 2;
	printf("El resultado es: %d", tot);

	return 0;
}

