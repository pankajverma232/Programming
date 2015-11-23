import java.util.*;
import java.lang.*;

class fact{
public static void main(String[] args)throws java.lang.Exception{
Scanner s = new Scanner(System.in);
    int[] a=new int[200];

int test = s.nextInt();    
while(test-- > 0)
    { int n=s.nextInt();
       a[0]=1;
       int m=1;
       int carry = 0;
       for(int i=1;i<=n;i++)
       {
            for(int j=0;j<m;j++)
            {
            int   x = a[j]*i+carry;
               a[j]=x%10; 
               carry = x/10;
            }
             while(carry>0) 
             {
               a[m]=carry%10;
               carry= carry/10;
               m++; 
             }
      }
              for(int i=m-1;i>=0;i--) 
              System.out.print(""+a[i]);
              System.out.println();
    }
}
}

