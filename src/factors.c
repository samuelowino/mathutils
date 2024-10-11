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
	printf("\n⌨️Enter the number that should match the sum of the factors");
	printf("\n");
	scanf("%d", &_sn);
	printf("\n\n");
	for (int i = -_pn; i <= _pn; i++){
		if (_pn % i == 0){	
			int _sum = i + (_pn / i);
			int _diff = i - (_pn / i);
			int _rdiff = (_pn / i) - i;
			if (_sum == _sn){
				printf("\n\n✅ (%d + %d = %d)", i , (_pn / i), _sum);
			}
			if (_diff == _sn){
				printf("\n\n✅ (%d - %d) = %d", i, (_pn / i), _diff);
			}
			if (_rdiff == _sn){
				printf("\n✅ (%d - %d) = %d", (_pn / i), i, _rdiff);
			}
		}
	}
	return 0;
}
