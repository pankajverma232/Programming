#include<stdio.h>
void swap(int *a,int *b){
	int temp =*a;
	*a=*b;
	*b=temp;
}
void heapify(int *arr,int size,int index){
	int h,l,r;
	h=index;
	l=(h<<1)+1;
	r= (h+1)<<1;
	if(l<size-1 && arr[l]>arr[h]) h=l;
	if(r<size-1 && arr[r]>arr[h]) h=r;
	if(h!=index){
	swap(&arr[index],&arr[h]);
	heapify(arr,size,h);
}
}
void cheap(int *arr,int size){
	int i;
	for(i=(size-2)/2;i>=0;i--){
	heapify(arr,size,i);
	}
}

void hsort(int *arr,int size){
	int i,s;
	s=size;
	while(s>2){
        	swap(&arr[s-1],&arr[0]);
        	s--;
        	heapify(arr,s,0);
	}
}

void print(int* arr,int size){
	int i;
	for(i=0;i<size;i++)printf("%d ",arr[i]);
}

 int main(){
	int arr[]={8, 2, 10, 9, 11, 1, 7, 3, 4};
	print(arr,9);
	printf("\n");
	cheap(arr,9);
	print(arr,9);
	printf("\n");
	hsort(arr,9);
	print(arr,9);
	printf("\n");
}
