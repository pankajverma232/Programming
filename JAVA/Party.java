import java.util.Scanner;
class Party{
public static void main(String[] args){
Scanner s = new Scanner(System.in);
int[] sp = new int[100];
int[] np = new int[100];
int z=0;
while(true){
int budget = s.nextInt();
int nump = s.nextInt();
if(budget==0&&nump==0) break;
int[] entry = new int[nump];
int[] pty = new int[nump];
for(int k=0;k<nump;k++){
entry[k] = s.nextInt();
pty[k]= s.nextInt();
}
double[] total = new double[nump];
for(int i=0;i<nump;i++) total[i] = (double)entry[i]/(double)pty[i];

double min=10;
int spent=0,nums=0,index=0;
while(true){min=10;
for(int i=0;i<nump;i++){
if(total[i]!=-1&&min>total[i]){
index=i;min=total[i];
}
}

total[index]=-1.0;
if(entry[index]+spent <= budget){ spent = entry[index]+spent;
nums += pty[index];
}
else break;
}
sp[z]=spent;
np[z]=nums;
z++;
}
for(int h=0;h<z;h++)
System.out.println(sp[h]+" "+np[h]);
}
}
