#include<stdio.h>
#include<time.h>
//#include<stdlib.h>
void bubble(){
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
   int a[n];
   // printf("\nenter the element in array\n");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    // printf("print the element after sorting\n");
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(a[j]<a[i]){
           int t= a[j];
           a[j]=a[i];
           a[i]=t;
           }
       }
   }
  
for(int i=0;i<n;i++)
printf("%d ",a[i]);
    
}
void selection(){
int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
int min_idx;
   for(int i=0;i<n-1;i++){
       min_idx=i;
       for(int j=i+1;j<n;j++){
           if(a[j]<a[min_idx]){
          min_idx=j;
           }
       }
        int t= a[min_idx];
           a[min_idx]=a[i];
           a[i]=t;
   }
   
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
int main(){
    clock_t start, end;
long int t;
start=clock();
 //selection();
 bubble();
end=clock();
t=end-start;
printf("Total elapsed time : %f", (double)t/(double)CLOCKS_PER_SEC);
}