#include <stdio.h>
#include "calculate.h"
ВНОШУ ИЗМЕНЕНИЯ
int
main (void)
{
	float Numeral;
	char Operation[4];
	float Result;
	printf("Число: ");
	scanf("%f", &Numeral);
	printf("Опреация (+,-,*,/,pow,sqrt,sin,cos,tan): ");
	scanf("%s", Operation);
	Result = Calculate(Numeral, Operation);
	printf("%6.2f \n",Result);
	return 0;
}
