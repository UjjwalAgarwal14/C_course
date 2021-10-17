#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the rows:-\n");
    scanf("%d",&r);
    printf("Enter the colomns:-\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Input your array:-\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("It's orignal array is:-\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
            printf(" %d ",arr[i][j]);
        printf("\n");
    }
    int arrT[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            arrT[i][j]=arr[j][i];
        }
    }
    printf("It's Transpose is:-\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
            printf(" %d ",arrT[i][j]);
        printf("\n");
    }
    return 0;
}

