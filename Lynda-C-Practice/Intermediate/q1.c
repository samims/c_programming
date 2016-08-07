#include<stdio.h>
int ex(int x,int y){
    int i;
    int mul=1;
    for(i=1;i<=y;i++){
        mul=mul*x;
    }
    return mul;
}
int main(){
int n,a,b,c,i,j;
int total=0;
scanf("%d",&n);

for(i=0;(ex(2,i)<=n);i++){
    for(j=0;j<=n;j++){
      a = 2 *j;
      b = ex(2,i);
      c = a + b;
      
    total=total+ex( 2 , c );
    }
}

printf("%d",(total%10));
return 0;
}
