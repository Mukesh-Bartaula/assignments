#include<stdio.h>
int main () {
  int i, j, k, r1, c1, r2, c2;
  int a[100][100], b[100][100], product[100][100], sum = 0; 
  printf("Enter the size of first matrix: ");
  scanf("%d %d", &r1,&c1);

  printf("Enter the size of second matrix: ");
  scanf("%d %d", &r2, &c2);

  if( c1 == r2 ){
    printf("Enter the first matrix: ");
    for(i=0; i<r1; i++){
      for(j=0; j<c1; j++){
        scanf("%d", &a[i][j]);
      }
      
     }
    printf("Enter the second matrix: ");
    for(i=0; i<r2; i++){
      for(j=0; j<c2; j++){
        scanf("%d", &b[i][j]);
      }
     }
    
   

    for(i=0; i<r1; i++){
      for(j=0; j<c2; j++){
        sum = 0;
        for(k=0; k<r2; k++){
          sum += a[i][k] * b[k][j];

        }
       // printf("Sum = %d\n", sum);
        product[i][j] = sum;
        
      }
    
    }
    printf("The product of matrix is:\n");

    for(i=0; i<r1; i++ ){
      for(j=0;j<c2; j++){
        printf("%d\t", product[i][j]);
      }
      printf("\n");
    } 
  }
  return 0;
}
