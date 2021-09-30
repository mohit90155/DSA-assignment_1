#include<stdlib.h>
#include<stdio.h>
struct matrix 
{
    int *a;
    int n;
};
void set(struct matrix *m,int i,int j,int val){
    m->a[i*m->n+j]=val;
}
void disp(struct matrix m){
    for(int i=0;i<m.n;i++){
        for(int j=0;j<m.n;j++)
        printf("%d ",m.a[i*m.n+j]);
        printf("\n");
    }
    printf("\n");
}
int main()
{
    struct matrix m;
    printf("enter the size of matrix\n");
    scanf("%d",&m.n);
    int size=m.n;
    m.a=(int*)malloc(size*size*sizeof(int));
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int val;
            scanf("%d",&val);
            set(&m,i,j,val);
        }
    }
    disp(m);
}