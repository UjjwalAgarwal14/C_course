#include <stdio.h>
int main() {
  int row, c,  i, j;
  printf("Enter the number of rows \n ");
  scanf("%d", &row);
  printf("Enter the number of columns \n");
  scanf("%d", &col);
 int a[row][col], b[row][col], sum[row][col];
  printf("Enter elements of the 1st matrix:\n");
  for (i = 0; i < row; i++) {
  
    for (j = 0; j < col; j++) 
      
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of the 2nd matrix :\n");
  for (i = 0; i < row; i++) {
  
    for (j = 0; j < col;j++) 
      scanf("%d", &b[i][j]);
    }

  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("Sum of the two matrices is: \n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) 
      printf("%d   ", sum[i][j]);
        printf("\n\n"); 
    }
  return 0;
}
