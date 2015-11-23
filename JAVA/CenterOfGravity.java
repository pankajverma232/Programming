import java.util.Scanner;

class cord{
double x=0;
double y=0;
}
class CenterOfGravity{
public static void main(String[] args){

Scanner s = new Scanner(System.in);
int test = s.nextInt();
while(test-->0){
int n = s.nextInt();
double sumX=0,sumY=0;

cord[] cd = new cord[n];
for(int i =0;i<n;i++){
double p = s.nextDouble();
double q =  s.nextDouble();
cd[i] = new cord();
cd[i].x = p;
cd[i].y=q; 
sumX  += cd[i].x;
sumY += cd[i].y;
}
System.out.printf("%.2f %.2f\n",sumX/n,sumY/n );
}
}
}
