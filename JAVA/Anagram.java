/*
anagram
*/

import java.util.Scanner;
import java.util.Arrays;
import java.math.BigInteger;
public class Anagram{
public static void main(String[] args){
Scanner s = new Scanner(System.in);
int N = 10000,count=0;
int i,j;
for(i=1,j=1;;){
int Tn = (i*(i+1))/2;
int Pn = (j*(3*j-1))/2;
if(Pn>=N||Tn>=N)break; 

if(Pn>Tn) i++;
else if(Tn>Pn) j++;
else {System.out.println(""+Tn);i++;j++;}
}
}

}
