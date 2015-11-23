import java.util.Scanner;
class SquareSum{

static int isSquare(int c)
{
int a=0;int b=(int)Math.sqrt(c);
if(c%4==1) 
{
while(a<=Math.sqrt(c))
{ int pows=(int)Math.pow(a,2)+(int)Math.pow(b,2);
if(a!=b && pows==c )                           //a!=b means 1^1+1^1=2 not allowed
{ System.out.printf(" yes Possible \t %d %d ", a,b);
return 1;
}
else if(pows>0) a++;
else b--;

System.out.printf( " %d %d %d \n", a,b,pows);
}

}
else
{ System.out.printf( "not Possible");
return 0;
}
return 0;
}

public static void main(String[] args)
{
System.out.printf(" %d ", isSquare(2888));
}
}
