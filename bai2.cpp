#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b;
	printf("Nhap vao 2 so nguyen:");
	scanf("%d %d", &a, &b);
		int x = a * b;
	do{
		printf("CACULATOR\n");
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. So du trong phep chia 2 so\n");
		printf("6. Uoc chung lon nhat\n");
		printf("7. Boi chung nho nhat\n");
		printf("8. Thoat\n");
		printf("9. Lua chon cua ban\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
			
				printf("Ban vua chon tinh tong 2 so: %d + %d = %d \n",a,b, a+b);
				break;
			case 2:
			
				printf("Ban vua chon tinh hieu 2 so: %d - %d = %d\n",a ,b , a - b);
				break;
			case 3:
			
				printf("Ban vua chon tinh tich 2 so: %d * %d = %d\n",a ,b , a * b);
				break;
			case 4:
			
				printf("Ban vua chon tinh thuong 2 so: %d / %d = %d\n", a,b,a / b );
				break;
			case 5:
			
				printf("Ban vua chon tinh su du trong phep chia la: %d % %d = %d\n", a, b , a % b );
				break;
			case 6:
				while (a != b) {
       				if (a > b) {
        				a -= b;
    				}
	   				else {
    					 b -= a;
    						}			
    }   
				printf("Ban vua chon tim uoc chung lon nhat la:%d \n",a);
				break;
			case 7:
					while (a != b){
            		if (a > b){
            			a -= b;
					}
					else{
						b -=a;
					}
				}
				printf("Ban vua chon tim boi chung nho nhat la:%d\n",x / a);
				break;	
			case 8:
				exit(0);
				printf("Thoat\n");
				break;
			default:
				printf("Vui long chon tu 1 den 8");
		}
	}while (1==1);
}
