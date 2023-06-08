#include <stdio.h>
#define N 4
#define M 3
int Row,Col;
int fun(int array[N][M]);
int main()
{
  int a[N][M],i,j,max,row,col;
  for(i=0;i<N;i++)
    for(j=0;j<M;j++)
       scanf("%d",&a[i][j]);
  for(i=0;i<N;i++)
    {  for(j=0;j<M;j++)
          printf("%5d",a[i][j]);
       printf("\n");
    }
  max=fun(a);
  printf("max=%d,row=%d,col=%d",max,Row,Col);
 return 0;
 }

/* 请在这里填写答案 */
int fun(int array[N][M]){
    int max=array[0][0],row,col;//*max_row=0,*max_col=0;
    for(row=0;row<N;row++){
        for(col=0;col<M;col++){
            if(array[row][col]>max){
                max=array[row][col];
                Row=row;
                Col=col;
            }
        }
    }
    return max;
}