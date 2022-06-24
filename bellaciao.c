 #include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,a,b,c,d,p,s,quotient,rem;

    int j=0;

    printf("enter a\n, enter b\n, enter c\n, enter d\n ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    quotient=a/b;
    rem=a%b;
    i=0;
     s=a*c;
  for(i=0;i<quotient;)
    {

        s+=b*d*j;
        i++;
        j++;


    }



    p=rem*quotient*d;
    printf("the sum is %d ",s+p);

}