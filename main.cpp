#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char a[100],b[100];
char*pa=a;
char*pb=b;
printf("enter the letter ");
gets(a);
printf("string of cractere is");
gets(b);

pa=pa+strlen(a);
while(*pb!='\0'){
   *pa=*pb;
   pa++;
   pb++;
}
*pa='\0';
printf("string of cractere is %s" ,a);
return 0;

}
