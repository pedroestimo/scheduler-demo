#include <stdio.h>

int main() {
int a[5];
int n;
	

scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

for (int i=1; i<n+1; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */ 
int t =0;

	for (int j=0;j<5; j++) {
	if ( i%a[j]==0){
		t=1;
		printf("%d",j);

	}
	
	}
	if(t==0){
	printf("-");

	}
printf("\n");
}
  return 0;
}
