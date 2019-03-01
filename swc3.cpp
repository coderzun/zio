#include<stdio.h>

int main(){
	int x;
	printf("======Menu======\n1. Cong\n2. Tru\n3. Nhan\n4. Chia nguyen\n5. Chia du\n6. Back"
		"\nHay lua chon di.");
	scanf("%d", &x);
	switch (x){
		case 6: break;
		case 1:{
			int a,b; 
			printf("Nhap 2 so a,b:");
			scanf("%d%d", &a, &b );
			printf("Tong 2 so a,b la:%d+%d=%d", a, b, a+b);
			break;
		}
		case 2:{
			int a,b;
			printf("Nhap 2 so a,b:");
			scanf("%d%d", &a, &b );
			printf("Hieu 2 so a,b la:%d-%d=%d", a, b, a-b);
			break;
		}
		case 3:{
			int a,b;
			printf("Nhap 2 so a,b:");
			scanf("%d%d", &a, &b );
			printf("Tich 2 so a,b la:%d*%d=%d", a, b, a*b);
			break;
		}
		case 4:{
			int a,b;
			printf("Nhap 2 so a,b:");
			scanf("%d%d", &a, &b );
			printf("Thuong 2 so a,b la:%d/%d=%d", a, b, a/b);
			break;
		}
		case 5:{
			int a,b;
			char c='\%';
			printf("Nhap 2 so a,b:");
			scanf("%d%d", &a, &b );
			printf("Du 2 so a,b la:%d%c%d=%d", a, c, b, a % b);
			break;
		}
	}
	return 0;
}

