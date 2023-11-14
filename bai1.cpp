#include <stdio.h>
int main(){
	int n;
	int i;
	for(int n = 1; n<=9; n++){
		printf("Bang nhan cua %d \n",n);
			for(int i = 1; i<=9; i++){
			int kq=n*i;
			printf("%d x %d = %d \n", n, i, kq);
		}
		
	}
		return 0;
}
