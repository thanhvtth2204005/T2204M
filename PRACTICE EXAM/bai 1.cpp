#include<iostream>
int main (){
	int n;
	do {
		printf ("Nhap n : ");
		scanf ("%d",&n);
	}while(n < 100 || n > 999);
	int a , b , c;
	a = n % 10;
	b = (n/10)%10;
	c = (n/100)%10;
	switch (c){
		case 1 : printf (" Mot tram \n");break;
		case 2 : printf (" Hai tram \n");break;
		case 3 : printf (" Ba tram \n");break;
		case 4 : printf (" Bon tram \n");break;
		case 5 : printf (" Nam tram \n");break;
		case 6 : printf (" Sau tram \n");break;
		case 7 : printf (" Bay tram \n");break;
		case 8 : printf (" Tam tram \n");break;
		case 9 : printf (" Chin tram \n");break;
	}
		switch (b){
		case 0: if (a > 0){
			printf ("Le \n");
		}break;
		case 1 : printf (" Muoi \n");break;
		case 2 : printf (" Hai muoi \n");break;
		case 3 : printf (" Ba muoi \n");break;
		case 4 : printf (" Bon muoi \n");break;
		case 5 : printf (" Nam muoi \n");break;
		case 6 : printf (" Sau muoi \n");break;
		case 7 : printf (" Bay muoi \n");break;
		case 8 : printf (" Tam muoi\n");break;
		case 9 : printf (" Chin muoi \n");break;
	}	
		switch (a){
		case 1 : printf (" Mot \n");break;
		case 2 : printf (" Hai  \n");break;
		case 3 : printf (" Ba  \n");break;
		case 4 : printf (" Bon \n");break;
		case 5 : printf (" Nam  \n");break;
		case 6 : printf (" Sau  \n");break;
		case 7 : printf (" Bay  \n");break;
		case 8 : printf (" Tam \n");break;
		case 9 : printf (" Chin \n");break;
	}
	return 0;
	
}