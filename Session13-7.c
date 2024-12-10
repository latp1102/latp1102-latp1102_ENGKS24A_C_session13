#include <stdio.h>

void taoMaTran(int **matran, int a, int b){
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++) {
            printf("Nhap phan tu [%d][%d]: ",i,j);
            scanf("%d",&matran[i][j]);
        }
    }
}

void inMaTran(int **matran, int a, int b){
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("%d",matran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a, b;
    printf("Nhap so hang: ");
    scanf("%d",&a);
    printf("Nhap so cot: ");
    scanf("%d",&b);

    int **matran = (int**)malloc(a * sizeof(int*));
    for (int i = 0; i < a; i++){
        matran[i] = (int*)malloc(b * sizeof(int));
    }

    taoMaTran(matran,a,b);

    printf("Ma tran:\n");
    inMaTran(matran,a,b);

    return 0;
}
