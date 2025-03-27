#include<stdio.h>
#define sqr(x) (x)*(x)
int fun(int x){
	return x*x;	
}
int main (){
	printf("%d\n",sqr(5+5));
	printf("%d\n",fun(5+5));

}
