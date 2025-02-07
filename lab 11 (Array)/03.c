 //WAP to sort an array and then find median

#include <stdio.h>
int main(){

	int l, sum=0;
    printf("Enter the element :");
	scanf("%d",&l);
	int a[l];
	for(int i=0;i<l;i++){
		scanf("%d", &a[i]);
	}
	for(int k=0;k<l;k++){
		for(int j=0;j<l-k-1;j++){
			if(a[j+1]<a[j]){
				a[j+1]=a[j]+a[j+1];
				a[j]=a[j+1]-a[j];
				a[j+1]=a[j+1]-a[j];
			}
		}
	}

	for(int i=0;i<l;i++){
		printf("%d ",a[i]);
	}
	float f=(a[(l-1)/2]+a[l/2])/2;
	if(l%2==0) printf("mean = %f", f);
	else printf("mean = %d", a[l/2]);
	return 0;
}