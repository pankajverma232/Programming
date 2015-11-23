#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)scanf("%d",&arr[i]);
while(1){
int min=0;
int count = 0 ;
for(i=0;i<n;i++) if(arr[i] != 0){ min = arr[i];
break;
}
if(min == 0) break;

for(i=0;i<n;i++){
	if(arr[i]==0) continue;
if(min > arr[i]) min = arr[i];
}

for(i=0;i<n;i++){
if(arr[i]>=min){ count++;
arr[i] -= min;
}
}
printf("%d\n",count);


}
}
