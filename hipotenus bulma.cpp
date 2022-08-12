#include <iostream>
#include <math.h>

int main (void) {

	float kenar1, kenar2, kenar3, sonuc;
	printf("\n HÝPOTENUS HESABÝ.");
	printf("\n kenar1=");
	scanf("%f",&kenar1);
	printf("\n kenar2=");
	scanf("%f",&kenar2);
	printf("sonuc=(kenar1*kenar1)+(kenar2*kenar2)=%f",(kenar1*kenar1)+(kenar2*kenar2));
	sonuc = sqrt(sonuc);
	printf("\n sonuc=%lf",sonuc);
	
	system("pause");
	return 0;
}
