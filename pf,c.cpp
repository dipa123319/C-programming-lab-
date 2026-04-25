#include<stdio.h>
int main(){
	int a=100;
	for(int i=1; a>0; i++){
	  printf("%d" , a);
	  a=a/2;
}
	  return0;
	
}



#include <stdio.h>

int main() {
    int a = 100;   // initialize a
    int i;         // declare i

    for (i = 1; a > 0; i++) {
        printf("%d\n", a);   // print value of a, not address (&a)
        a = a / 2;           // halve a each time
    }

    return 0;
