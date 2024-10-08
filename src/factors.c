#include <stdio.h>

int main(){
	int _pn = 0; // Product
	int _sn = 0; // Sum
	printf("========================================================");
	printf("Factors Generator");
	printf("========================================================");
	printf("\n⌨️Enter the product whose factors you need\n\n");
	printf("\n");
	scanf("%d", &_pn);
	printf("\n\n");
	printf("Received: %d", _pn);
	printf("\n⌨️Enter the number that should match the sum of the factors");
	printf("\n");
	scanf("%d", &_sn);
	printf("\n\n");
	printf("Received: %d", _sn);
	printf("Looking for factors of [%d] that also add up to [%d]",_pn,_sn);
	printf("\n\n");
	for (int i = -_pn; i <= _pn; i++){
		if (_pn % i == 0){	
			printf("\n✨( %d x %d = %d)", i , (_pn / i), (i * (_pn / i)));
			int _sum = i + (_pn / i);
			int _diff = i - (_pn / i);
			int _rdiff = (_pn / i) - i;
			printf("\tSum %d",_sum);
			if (_sum == _sn){
				printf("\n***************************************************************");
				printf("\n\nFound Match ✅ (%d + %d = %d)", i , (_pn / i), _sum);
				printf("\n***************************************************************");
			}
			if (_diff == _sn){
				printf("\n---------------------------------------------------------------");
				printf("\nFound Match (%d - %d) = %d", i, (_pn / i), _diff);
				printf("\n---------------------------------------------------------------");
			}
			if (_rdiff == _sn){
				printf("\n----------------------------------------------------------------");
				printf("\nFound match (%d - %d) = %d", (_pn / i), i, _rdiff);
				printf("\n----------------------------------------------------------------");
			}
		}
	}
	printf("\n\n");
	printf("END🧚‍♂️ Exiting...");
	return 0;
}
