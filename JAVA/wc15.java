import java.util.*;
import java.lang.*;

class wc15
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		//no of test cases
		int a = s.nextInt();
		//System.out.println(a+"  ");
		int[] arr = new int[a];
		for(int i=0;i<a;i++){
		arr[i] = s.nextInt();		
		}
		
		for(int i : arr){
			 System.out.println(Math.round(39.0/5.0*(double)i)+"/"+(int)Math.floor(1.0/5.0*i));
		}
		
	}
}
